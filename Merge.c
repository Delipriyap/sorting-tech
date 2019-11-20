#include<stdlib.h> 
#include<stdio.h>
void mergesort(int a[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2];
	for (i = 0; i < n1; i++) 
		L[i] = a[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = a[m + 1+ j];
	i = 0;  
	j = 0; 
	k = l;  
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			a[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			a[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		a[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		a[k] = R[j]; 
		j++; 
		k++; 
	} 
output(a,r);
} 
void output(int a[],int r);
void Merge(int a[], int l, int r) 
{ 
        r=r-1;
	if (l < r) 
	{  
		int m = l+(r-l)/2;  
	//	Merge(a, l, m); 
	//	Merge(a, m+1, r); 

		mergesort(a, l, m, r); 
	} 
} 
void output(int a[], int r) 
{ 
	int i; 
	for (i=0; i < r+1; i++) 
		printf("%d\n",a[i]); 
	printf("\n"); 
}  
