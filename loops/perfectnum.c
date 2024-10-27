#include"stdio.h"
void main(){
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=(n-1);i++){
        if(n%i==0){
        sum=sum+i;
        }
    }
    if (sum==n) printf("perfect number");
    else printf("Not a perfect number");
}