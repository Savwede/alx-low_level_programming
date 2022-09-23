#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a strin
 * @src: pointer to the source string
 *
 * Return: a pointer to the destination string
 */

char *cap_string(char *src)
{
	int i, nxt, len = strlen(src);
	char *s, *ch;

	s = src;
	ch = ",;.!?\"(){}\n\t ";
	for (i = 0; i < len; i++)
	{
		nxt = 1 + i;
		if (strchr(ch, s[i]))
		{
			s[nxt] = toupper(s[nxt]);
		}
	}
	return (s);
}
