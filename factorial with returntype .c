#include <stdio.h>
int  factorial (int n );
int main(){
    int n;
    printf("enter a number  whose you want to find the factorial  ");
    scanf("%d",&n);
     int res =factorial (n);
     printf ("factorial is %d ",res );
}
int factorial (int n ){
    int i,fact=1;
   
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    return fact ;

}
