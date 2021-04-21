 #include<stdio.h>
int main()
{
int n,a[10],b[10],t[10],w[10],c[10],r[10],i,m;
float atat=0,awt=0,art=0;
            for(i=0;i<10;i++)
            {
                        a[i]=0; b[i]=0; w[i]=0; c[i]=0;
            }
printf("\nEnter the number of process:");
            scanf("%d",&n);
printf("\nEnter the Burst times");
            for(i=0;i<n;i++)
                scanf("%d",&b[i]);
    printf("\nEnter the Arrival times");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
    c[0]=0;
             for(i=0;i<10;i++)
                   c[i+1]=c[i]+b[i];
             for(i=0;i<n;i++)
            {     
                        w[i]=c[i]-a[i];
                        t[i]=c[i+1]-a[i];
                        r[i]=c[i]-a[i];
                        awt=awt+w[i];
                        atat=atat+t[i];
                        art=art+w[i];
                        
            }
                        awt =awt/n;
                        atat=atat/n;
                        art=art/n;
            printf("Process\t\tArrival Time\tBurst time\t Completion time \tTurn arround time\tWaiting time\t Response time\n");
            for(i=0;i<n;i++)
            {
                        printf("\tp%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,a[i],b[i],c[i],t[i],w[i],r[i]);
                        
            }
printf("The Average Waiting Time is %f\n",awt);
printf("The Average turn around time is %f\n",atat);
printf("The Average response time is %f\n",art);

}

 
