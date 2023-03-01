#include "main.h"
#include <stdio.h>
/**
 * leet- unction that encodes a string into 1337
 * @s:char pointer to be checked
 * Return: string encoded
 */
char *leet(char *s)
{
	char *p = s;
	int i;

	while (*p)
	{
		for (i = 0; i < 5; i++)
		{
			if (*p == "AEOTL"[i] || *p == "aeotl"[i])
			{
				*p = "43071"[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
