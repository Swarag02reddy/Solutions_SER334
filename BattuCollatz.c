/**
* implementing collatz conjecture and printing the number of iterations required to reach to 1.
*
* Completion time: 0.5 Hours
*
* @author (Swarag Reddy Battu).
* @version C language.
*/

#include<stdio.h>
int termination(int n);
int main(){
    int n;
    printf("enter a number : ");
    printf("\n");
    scanf("%d",&n);
    printf("%d iterations required to implement Collatz Conjecture",termination(n));
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