#include <stdio.h>
int main()
{
    int a[10],n,i,s,f=0;
    printf("input the array size");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("input the searching element");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            f=1;
            printf("the searching element is found at given location=%d",i+1);
            break;
        }
        if(f==0)
        printf("the searching element is unsecssful");
    }
    return 0;
}