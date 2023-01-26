#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);
    if (num%6==0){
        printf("The Number entered is divisible by 6");
    }
    else
    {
        printf("The number entered is not divisible by 6");
    }  
    return 0;
}