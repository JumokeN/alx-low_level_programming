#include <stdio.h>


/**
* main - prints the lowercase alphabet in reverse, followed by a new line
*/

int main(void)
{
int ch;
for (ch = 122; ch > 96; ch--)
{
	putchar(ch);
}
	putchar('\n');
return (0);
} 
