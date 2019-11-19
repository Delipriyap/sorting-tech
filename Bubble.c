#include<stdio.h>
#include<stdlib.h>
void Bubble(int a[],int n)
{
	FILE *fp;
	fp=fopen("File.c","w+");
	int b[]={1,4,5,6,7,8,9,32};
	int i,j,temp;
        for( int i=0; i<n-1;i++)
       {
            for( int j=0;j<n-1-i;j++)
            {
                 if( a[j] > a[j+1] )
                 {
                       temp=a[j];
                       a[j] = a[j+1];
                       a[j+1] = temp;
                  }
            }
       }
       for(i=0;i<n;i++)
       {
       fprintf(fp,"%d\n",a[i]);
       }
       for(i=0;i<n;i++)
       {
	       if(a[i]==b[i])
	       continue;
	       else
	       {
		       printf("Fail");
                       exit(0);
	       }
      }
       printf("Success\n");
}       
