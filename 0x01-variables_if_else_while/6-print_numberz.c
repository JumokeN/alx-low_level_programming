#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* main - prints all single digit numbers of base 10 starting from 0,
*  followed by a new line.
*/

int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)

{
	putchar(n);

}
putchar('\n');
return (0);
}
