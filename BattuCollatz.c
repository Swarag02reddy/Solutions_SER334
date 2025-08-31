#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    printf("\n");
    scanf("%d",&n);
    printf("%d",termination(n));
    return 0;
}
int termination(int n){
    int count=0;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else{
           n=(3*n)+1;
        }
        count++;
    }
    if(n==1) return count;
}