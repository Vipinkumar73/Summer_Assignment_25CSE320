#include <stdio.h>
int maximum(int a,int b){
    if(a>b)
    {
        return a;}
        else
        {
            return b;}
        }
        int main(){
            int a,b,max;
            printf("enter two numbers");
            scanf("%d%d",&a,&b);
            max = maximum(a,b);

            printf("maximum number: %d",max);
            return 0;
            
        }
    
