//C program to implement FCFS disk scheduling

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,requests[500],start,size,seek_time;
    float avg_seek_time;
    int i,j,temp,temp1,temp2,temp3;
    printf("\n\n\t\tFCFS DISK SCHEDULING\n\n");
    printf("Enter start position(cylinder) of disk head: ");
    scanf("%d",&start);
    printf("Enter number of requests:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)     //inputting requests
    {
        printf("Enter request %d: ",i+1);
        scanf("%d",&requests[i]);
    }

   
    seek_time=0;    //initialize
    seek_time=abs(start-requests[0]); //doing first seek
    //printf("%d",seek_time);
    for(i=1;i<=n-1;i++)  //starting from 2nd request onwards
    {
        seek_time=seek_time+abs(requests[i]-requests[i-1]);
    }
    printf("Seek time is : %d \n",seek_time);
    double fl_seek_time= (float) seek_time;
    float fl_n= (float) n;
    avg_seek_time=fl_seek_time/fl_n;      //   total seek time/no.of requests
    printf("Average seek time is : %f\n",avg_seek_time);

}