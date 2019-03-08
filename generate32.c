#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fptr;
        int i;
        fptr = fopen("32k.txt","w");
        for(i=0;i<32000;i++)
        {
                fprintf(fptr,"%d", rand() % 1000);
        }
        return 0;
}

