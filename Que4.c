/*
Q.4 WAP to print all even numbers from a given 2D array using Pointer.
*/
void main(){
	int n,i,sum=0;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	for(i=0;i<n;i++)
	{
	  printf("Enter a[%d]",i);
      scanf("%d",&a[i]);
      ptr[i]=&a[i];
	}
	
	printf("Even numbers from array\n:");
	for(i=0;i<n;i++){
		if(*ptr[i]%2==0){
			printf("%d\n",*ptr[i]);
			sum=sum+*ptr[i];
		}	
	}
	 printf("sum of even numbers is % d",sum);
	
}
