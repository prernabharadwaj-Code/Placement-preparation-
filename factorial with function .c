#include <stdio.h>
void factorial ();
int main(){
    factorial ();
}
void factorial (){
    int n,i,fact=1;
    printf("enter a number  whose you want to find the factorial  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("factorial is %d",fact);
    
    
}
