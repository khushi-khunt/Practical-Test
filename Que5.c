#include<stdio.h>
/*
Q.5 Write a Program to print the below pattern using nested for loop.            
           *
        *     *
      *         *
    *             *
  *                 *

*/
#include<stdio.h>
void main(){
	
	int i,j,s;
	for (i=5;i>=1;i--)
	    {
		 for(s=i;s>=1;s--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--){
			if(j==5){
				printf("*");
			}else{
				printf(" ");
			}
		}
		for(j=i+1;j<=5;j++)
		{
			if(j==5)
			{
				printf("*");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
