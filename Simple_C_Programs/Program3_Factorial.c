#include <stdio.h>
int factorial()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int recursion(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        return n*recursion(n-1);
    }
    printf("%d\n",recursion(n));
    return n;
}
int main()
{

    int i,t=1;
    printf("enter the number of test cases : ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        factorial();
    }
    
    return 0;
}