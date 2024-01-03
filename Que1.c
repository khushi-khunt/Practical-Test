/*
Q.1 WAP to print all even numbers from a given range using UDF.
Enter any number:-20
0
2
4
6
8
10
12
14
16
18
20

*/
#include<stdio.h>

void number(){
	int num,i;
	
	printf("Enter any number:-");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++){
		 if(num%2==0)
		 {
    	printf("%d\n",i);
    	i++;
	}
	}
	 
   
}
	
void main(){
	
	number();
}
