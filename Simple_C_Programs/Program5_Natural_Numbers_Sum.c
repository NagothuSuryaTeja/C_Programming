#include <stdio.h>
int solve()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int Sum_of_NaturalNumbers(int n)
    {
        int Sum;
        return Sum =(n*(n+1))/2;
    }
    printf("%d\n",Sum_of_NaturalNumbers(n));
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