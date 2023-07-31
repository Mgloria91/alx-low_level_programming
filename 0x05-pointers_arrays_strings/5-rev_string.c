#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverse a string.
 * @s:  The input string.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	char temp;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
		end++;

	end--:

		while (start < end)
		{
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			start++;
			end--;
		}
}
