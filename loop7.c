#include<stdio.h>
int main()
{
char ch;
ch='a';
while ('a'<=ch && ch<='z')
{
printf("%c %d\n", ch,ch);
ch++;
}
return 0;
}

