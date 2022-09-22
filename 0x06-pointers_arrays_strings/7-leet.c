#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * leet - encodes a string into numbers
 * @src: pointer to the source string
 *
 * Return: a pointer to the destination string
 */

char *leet(char *src)
{
	char *ch, *s, *num;
	int len = strlen(src), sl, i, j;

	ch = src;
	s = "aeotl";
	num = "43071";
	sl = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < sl; j++)
		{
			if (toupper(ch[i]) == toupper(s[j]))
			{
				ch[i] = num[j];
				break;
			}
		}
	}
	return (ch);
}
