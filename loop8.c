#include<stdio.h>
int main()
{
char ch;
ch = 'A';
while ('A'<=ch && ch<='z')
{
printf("%c %d \n", ch,ch);
ch++;
}
return 0;
}
