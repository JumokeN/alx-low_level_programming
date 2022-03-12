#include <stdio.h>


/**
 *
 *  main - prints all the number of base 16 in lowercase,followed by a new line.
 */
int main(void)


{
	int n;


char l;


for (n = '0'; n <= '9'; n++)

{

	putchar(n);

}

for (l = 'a'; l <= 'f'; l++)

{
	putchar(l);

}
putchar('\n');

return (0);

}
