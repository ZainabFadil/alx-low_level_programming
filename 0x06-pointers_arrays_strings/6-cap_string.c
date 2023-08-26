#include <string.h>
#include "main.h"
#include <string.h>

/**
*cap_string - capitalize the words of the string
*@str: parameter
*Return: string
*/
char *cap_string(char *str)
{
	int len = strlen(str);
	int i, j;
	char a[13];
	
	a[0] = '\n';
	a[1] = '\t';
	a[2] = ' ';
	a[3] = ',';
	a[4] = ';';
	a[5] = '.';
	a[6] = '!';
	a[7] = '?';
	a[8] = '"';
	a[9] = '(';
	a[10] = ')';
	a[11] = '{';
	a[12] = '}';

	/*the first char of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	/* the rest of the code */
	for (i = 1; i < len; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 13; ++j)
			{
				if (str[i - 1] == a[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
