/*
Q.3 WAP to find Fibonacci Series to n Numbers and Store it into textfile. 
*/
void main(){
	int n1=0,n2=1,n3,n;
	
	printf("Enter any number:-");
	scanf("%d",&n);
	
	printf("%d,%d;:n1,n2");
	
	n3=n%10;
	
	while(n)
	{
	 n=n/10;
	 printf("%d",n);
	 n++;
	 n1=n2;
	 n2=n3;
	}
	
}
