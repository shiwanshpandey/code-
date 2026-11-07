#include<stdio.h>
int main(){
int n;
printf("enter a number : ");
scanf("%d", &n);
int sum =0;

for(int i =1, j=n; i<=n && j>=1; i++, j--){
    sum = sum + i;
     printf("%d\n", j);
}
printf("sum is %d", sum);
//for(int j=n; j>=1; j--){
   // printf("%d\n", j);
//}
return 0;
}