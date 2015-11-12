/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *str, int i, int j)
{
	char temp;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void str_words_in_rev(char *input, int len)
{
	reverse(input, 0, len - 1);
	int i = 0, j = 0;
	int flag = 0;
	while (input[i] != '\0')
	{
		if (input[i] == ' ' || input[i + 1] == '\0')
		{
			if (input[i] == ' ')
				reverse(input, j, i - 1);
			else
				reverse(input, j, i);
			j = i + 1;
			flag = 1;
		}
		i++;
	}

	if (input[i] == '\0' && flag == 0)
		reverse(input, 0, len - 1);
}
