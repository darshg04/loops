#include"stdio.h"
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
        printf("Not a prime number");
        break;}
        else {
        printf("Prime number");
        break;
        }
    }
}