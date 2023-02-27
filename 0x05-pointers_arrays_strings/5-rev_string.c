#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */
void rev_string(char *s)
{
	int a, len;

	char *begin, x, *end = s;
	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
@@ -20,6 +20,7 @@ void rev_string(char *s)
	begin = s;
	for (a = 0; a < len / 2; a++)
	{
		char x;
		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
