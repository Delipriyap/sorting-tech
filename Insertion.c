#include<stdio.h>
void Insertion(int a[],int n)
{
	int i,j,key;
	for( int i=1; i<n ;i++)
  {
         key =a[i];
         j = i-1;
         while( j>=0 && a[j]>key )
         {
                 a[j+1] = a[j];
                 j = j-1;
         }
    a[j+1] = key;
  }

for (i = 0; i < n; i++)
       	printf("%d\n", a[i]);
}
