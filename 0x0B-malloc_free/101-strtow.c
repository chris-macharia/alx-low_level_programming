#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	int num_words = 0;
	int in_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			num_words++;
			in_word = 1;
		}
	}

	char **result = (char **) malloc((num_words + 1) * sizeof(char*));

	if (result == NULL)
	{
		return (NULL);
	}

	int curr_word = 0;
	int start_of_word = 0;
	int end_of_word;
	in_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				end_of_word = i;
				result[curr_word] = (char *) malloc((end_of_word - start_of_word + 1) * sizeof(char));

				if (result[curr_word] == NULL)
				{
					for (int j = 0; j < curr_word; j++)
					{
						free(result[j]);
					}

					free(result);
					return (NULL);
				}

				memcpy(result[curr_word], str + start_of_word, end_of_word - start_of_word);
				result[curr_word][end_of_word - start_of_word] = '\0';
				curr_word++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start_of_word = i;
			in_word = 1;
		}
	}

	if (in_word)
	{
		end_of_word = strlen(str);
		result[curr_word] = (char *) malloc((end_of_word - start_of_word + 1) * sizeof(char));

		if (result[curr_word] == NULL)
		{
			for (int j = 0; j < curr_word; j++)
			{
				free(result[j]);
			}
			free(result);
			return (NULL);
		}

		memcpy(result[curr_word], str + start_of_word, end_of_word - start_of_word);
		result[curr_word][end_of_word - start_of_word] = '\0';
		curr_word++;
	}


	result[curr_word] = NULL;
	return (result);
}
