#include <stdio.h>
/**
*main- print all combination of three
*Return: Always 0 (Success)
*/
int main(void)
{
int one;
int ten;
int hundred;
for (hundred  = '0'; hundred <= '9'; hundred++)/*prints hundred*/
{
for (ten = (hundred + 1); ten <= '9'; ten++)/* prints ten*/
{
for (one = (ten + 1); one <= '9'; one++)
{
putchar(hundred);
putchar(ten);
putchar(one);
if(hundred != '7' || ten != '8' || one != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
