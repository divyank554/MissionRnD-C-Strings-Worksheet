/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) 
{
	if (str == '\0')
		return '\0';
	int i = 0,j = 0;
	for (j = 0; str[j] !='\0' ; j++)
		if (str[j] != ' ')
			str[i++] = str[j];

		str[i] = '\0';
	return '\0';
}