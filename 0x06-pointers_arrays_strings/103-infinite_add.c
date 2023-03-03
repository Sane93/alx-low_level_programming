#include "main.h"
 #include <string.h>
/**
 * *infinite_add-  function that adds two numbers.
 * @n1: first integer
 * @n2: second integer
 * @r: buffer to store result
 * @size_r: buffer siz
 * Return: r on success, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 >= size_r)
	{
		return (0);
	}
	memset(r, '0', size_r - 1);
	r[size_r - 1] = '\0';

	int carry;
	int idx1 = len1 - 1;
	int idx2 = len2 - 1;
	int idxr = size_r - 2;

	carry = 0;

	while (idx1 >= 0 || idx2 >= 0)
	{
		int d1 = (idx1 >= 0) ? n1[idx1] - '0' : 0;
		int d2 = (idx2 >= 0) ? n2[idx2] - '0' : 0;
		int sum = d1 + d2 + carry;

		carry = sum / 10;

		int digit;

		digit = sum % 10;
		r[idxr] = digit + '0';
		idx1--;
		idx2--;
		idxr--;
	}
	if (carry != 0)
	{
		if (idxr < 0)
		{
			return (0);
		}
		r[idxr] = carry + '0';
	}
	while (*r == '0' && *(r + 1) != '\0')
	{
		r++;
	}
	return (r);
}
