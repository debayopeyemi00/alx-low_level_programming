#include <stdio.h>
/**
*main- print 00 to 99 with no duplicate
*Return: Always 0 (Success)
*/
int main(void)
{
int ones;
int tens;
for (tens = '0'; tens <= '9'; tens++)/*prints tens*/
{
for (ones = (tens + 1); ones <= '9'; ones++)
{
putchar(tens);
putchar(ones);
if (tens != '8' || ones != '9')/*print commas*/
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
