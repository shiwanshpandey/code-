#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);
    if(marks >30)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}
