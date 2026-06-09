#include <stdio.h>
int main(){
    int n,count;
    printf("enter a number");
    scanf("%d",&n);

    count = 0;
    while(n!=0)
    {
        count = count +(n & 1);
        n = n >> 1;
    }
    printf("total number of set bits : %d", count);

    return 0;
    

}