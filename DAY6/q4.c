#include <stdio.h>
int main(){
    int n,p,i,c=1,temp;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter a power");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        temp=n;
        c=c*temp;

    }
    printf("result: %d",c);
    return 0;
    

}