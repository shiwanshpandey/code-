#include<math.h>

void Square(int n);

int main()
{
    int a; 
    printf("enter a number: ");
    scanf("%d",&a);
    Square(a);
    return 0;
}

void Square(int n)
{
    int s = pow(n,2);
    printf("Square is %d", s);
}