#include <stdio.h>
int partition(int a[], int low, int high)
{
  int temp1,temp2;
  int pivot = a[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (a[j] <= pivot)
    {
      i++;
      temp1=a[i];
      a[i]=a[j];
      a[j]=temp1;      
    }
 } 
  temp2=a[i+1];
  a[i+1]=a[high];
  a[high]=temp2;
  return (i + 1);
}
void Quick(int a[], int low, int high)
{
  high=high-1;
  int i,n;
  if (low < high)
  {
    int pi = partition(a, low, high);
  //  Quick(a, low, pi - 1);
   // Quick(a, pi + 1, high);
  }
for(int i=0;i<high+1;i++)
{
printf("%d\n",a[i]);
}
}
/*void output(int a[],int high)
{
for(int i=0;i<high;i++)
{
printf("%d\n",a[i]);
}
}*/

