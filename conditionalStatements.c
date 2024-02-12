#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=9)
    {
       char *words[]={"one","two","three","four","five","six","seven","eight","nine"};
       printf("%s\n",words[n-1]);
    }
    else
    {
        printf("Greater than 9");
    }
}