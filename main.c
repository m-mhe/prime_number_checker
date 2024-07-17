#include<stdio.h>
//Program to check if your number is prime or not.
void main(){
    int active= 1;
    while(active){
    printf("\nEnter a number to check if it is prime or not: ");
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
        printf("\n%d is a prime number.", num);
        printf("\n\nTo turn off this program enter 0, otherwise if you want to continue enter 1: ");
        scanf("%d", &active);
        break;
    }
    default:{
        printf("\n%d is not a prime number", num);
        printf("\n\nTo turn off this program enter 0, otherwise if you want to continue enter 1: ");
        scanf("%d", &active);
        break;
    }
    }
    }
}
