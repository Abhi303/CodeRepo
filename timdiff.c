#include<stdio.h>
#include<sys/time.h>
int main()
{
    FILE *fptr;
    fptr=fopen("16k.txt","r");
    int i,j,a[32001];
    struct timeval t,t1;
    double time_spent1,time_spent2;
    for(i=0;i<16000;i++)
    {
        fscanf(fptr, "%d",&a[i]);
    }
    gettimeofday(&t,NULL);
    for(i=0;i<15999;i++)
    {
        for(j=i;j<16000;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }	
    gettimeofday(&t1,0)
    time_spent1 = (t1.tv_sec-t.tv_sec)*100;
    for(i=0;i<32000;i++)
    {
        fscanf(fptr, "%d",&a[i]);
    }
    begin = clock();
    for(i=0;i<31999;i++)
    {
        for(j=i;j<32000;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
    end = clock();
    time_spent2 = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("%lf",time_spent2/time_spent1);
    return 0;
}
	
