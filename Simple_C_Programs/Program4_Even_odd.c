#include <stdio.h>
int solve()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int Even_or_odd(int n)
    {
        if(n%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    Even_or_odd(n);
}
int main()
{
    int i,t=1;
    printf("enter the number of test cases : ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        solve();
    }
}