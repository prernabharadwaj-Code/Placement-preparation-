#include <stdio.h>
void factorial (int n );
int main(){
    int n;
    printf("enter a number  whose you want to find the factorial  ");
    scanf("%d",&n);
    factorial (n);
}
void factorial (int n ){
    int i,fact=1;
   
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("factorial is %d",fact);

}
