#include <stdio.h>
int  factorial (int n );
int main(){
    int n;
    printf("enter a number  whose you want to find the factorial  ");
    scanf("%d",&n);
    int res = factorial (n);
    printf("factorial is %d",res);
     
}
int factorial (int n ){
    if (n==0||n==1){
        return 1;
    }
    else 
    return n*factorial(n-1);
}
    
