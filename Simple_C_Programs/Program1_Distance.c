#include <stdio.h>
#include <math.h>
int distance()
{
    int x1,x2,y1,y2,dist;
    float length;
    printf("Enter first point coordinate (x1) : ");
    scanf("%d",&x1);
    printf("Enter first point coordinate (y1) : ");
    scanf("%d",&y1);
    printf("Enter first point coordinate (x2) : ");
    scanf("%d",&x2);
    printf("Enter first point coordinate (x2) : ");
    scanf("%d",&y2);
    dist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    length = sqrt(dist);
    printf("%f",length);
    return 0;
}
int main()
{
    int i,t=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        distance();
    }
    return 0;
}