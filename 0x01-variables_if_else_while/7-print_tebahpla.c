#include <stdio.h>
/**
 * main - program that prints the lowercase in reverse
 *
 */
int main(void)
{
char low;
for (low = 'z'; low >='a'; low--)
putchar(low);
putchar('\n');
return (0);
}
