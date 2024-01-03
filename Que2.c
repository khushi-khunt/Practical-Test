#include<stdio.h>
/*
Q.2 WAP to find a square of all elements from a given 1D array.
Enter array size:3

Enter a[0]:2
Enter a[1]:4
Enter a[2]:6

Square of all elements is:
4
16
36

*/
void main(){
	int i,n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Square of all elements is: ");
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]*a[i]);
	}
}
