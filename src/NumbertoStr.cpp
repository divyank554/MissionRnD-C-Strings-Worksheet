/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void reverse(char *str, int len)
{
	int i = 0;
	int j = len - 1;
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
void number_to_str(float number, char *str,int afterdecimal)
{
	int div = 1, tempo=1;
	int j = afterdecimal;
	int count = 0;
	if (number < 0)
	{
		number = number * -1;
		tempo = 0;
	}
	while (j != 0)
	{
		div = div * 10;
		j--;
	}
	number = number * div;

	int temp = (int)number;
	int tmp;
	int flag = 0;

	while (temp != 0)
	{
		afterdecimal--;

		tmp = temp % 10;

		str[count++] = tmp + '0';

		if (afterdecimal == 0 && flag == 0)
		{
			str[count++] = '.';
			flag = 1;
		}

		temp = temp / 10;
	}

	if (tempo == 0)
		str[count++] = '-';

	reverse(str, count);

	str[count++] = '\0';


}
