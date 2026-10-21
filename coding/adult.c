#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("Man is adult\n");
    }
    else
    {
        printf("Man is not adult\n");
    }
    return 0;
}