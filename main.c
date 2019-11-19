#include<stdio.h>
#include "head.h"
int main()
{
	int a[]={9,8,7,6,5,4,32,1};
	int n= sizeof(a)/sizeof(a[0]);
	Bubble(a,n);
	Insertion(a,n);
	Selection(a,n);
	return 0;
}
