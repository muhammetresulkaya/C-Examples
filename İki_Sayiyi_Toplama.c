#include <stdio.h>

int main(){
    int num1,num2;
    
    printf("Enter first integer\n");
    scanf("%d",&num1);
    printf("Enter second integer\n");
    scanf("%d",&num2);
    
    int sum = num1+num2;
    prntf("Sum is%d\n",sum);
    
    return 0;
}