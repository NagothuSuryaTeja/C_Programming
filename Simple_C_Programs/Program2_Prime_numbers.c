#include <stdio.h>
int primenumbers()
{
    int i,n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("%d is neither prime nor composite\n");
        return n;
    }
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not prime\n");
            return n;
        }
    }
    printf("prime\n");

}
int main()
{

    int i,t=1;
    printf("enter the number of test cases : ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        primenumbers();
    }
    
    return 0;
}