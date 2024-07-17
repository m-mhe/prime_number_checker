#include<stdio.h>
//Program to check if your number is prime or not.
int main(){
    int active= 1;
    while(active!=0){
    printf("Enter a number to check if it is prime or not: ");
    int num;
    scanf("%d", &num);
    int result = 0;
    for(int n = 1; n<=num; n++){
        if(num%n==0){
            result++;
        }
    }
    switch (result){
    case 2:{
        printf("%d is a prime number.", num);
        printf("\nTo turn off this program enter 0: ");
        scanf("%d", &active);
        break;
    }
    default:{
        printf("%d is not a prime number", num);
        printf("\nTo turn off this program enter 0: ");
        scanf("%d", &active);
        break;
    }
    }
    }
    return 0;
}
