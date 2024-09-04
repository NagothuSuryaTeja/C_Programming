#include <stdio.h>
int solve()
{
    int n;
    printf("Enter the year : \n");
    scanf("%d",&n);
    int Leaf_Year(int n)
    {
        if(n%400==0)
        {
            printf("leaf\n");
        }
        else if(n%100 == 0)
        {
            printf("not leaf\n");
        }
        else
        {
            printf("leaf\n");
        }
    }
    Leaf_Year(n);
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