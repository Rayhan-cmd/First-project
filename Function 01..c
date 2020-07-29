#include<stdio.h>
void swap(int ,int);
int main()
{


int a,b;
printf("Enter values for a and b\n");
scanf("%d %d",&a,&b);
printf("\n\nBefore swapping:a=%d and b=%d\n",a,b);
swap (a,b);
return 0;

}
void swap(int x,int y)
{
    int template;
    template=x;
    x       =y;
    y       =template;

    printf("\n\nAfter swapping: a=%d and b=%d\n",x,y);

}
