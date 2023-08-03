#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMovement=0,initial;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
       scanf("%d",&RQ[i]);
    printf("Enter the initial head position\n");
    scanf("%d",&initial);
    printf("Sequence of request acesses:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",RQ[i]);
        TotalHeadMovement=TotalHeadMovement+abs(RQ[i]-initial);
        initial=RQ[i];       
    }
    printf("\nTotal head movement is %d",TotalHeadMovement);
    return 0;
}