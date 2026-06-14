#include <stdio.h>
int reverse(int number,int p){
    if(number == 0)
        return p;
    
    
        p = p * 10 + ( number%10);

        return reverse (number/10,p);

    }

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",reverse(n,0));
    return 0;
}