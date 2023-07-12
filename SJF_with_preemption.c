//SJF with Preemption and Arrival Time//
#include<stdio.h>
int main()
{
int burst_time[20],p[20],waiting_time[20],tat[20],i,j,n,total=0,pos,temp;
float avg_waiting_time,avg_tat;
printf("please enter number of process: ");
scanf("%d",&n);
printf("\n enter the Burst Time:\n");
for(i=0;i<n;i++)
{
printf("p%d:",i+1);
scanf("%d",&burst_time[i]);
p[i]=i+1;
}
// from here, burst times sorted
for(i=0;i<n;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(burst_time[j]<burst_time[pos])
pos=j;
}
temp=burst_time[i];
burst_time[i]=burst_time[pos];
burst_time[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}
