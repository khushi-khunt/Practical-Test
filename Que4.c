/*
Q.4 WAP to print all even numbers from a given 2D array using Pointer.
*/
void main(){
	int i,j,n,m,p;
	
	printf("Enter row size:");
	scanf("%d",&n);
	
	printf("Enter column size:");
	scanf("%d",&m);
	
	int a[i][j],b[i][j];
	
	printf("Enter value of a:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=m;j++)
		{
		   printf("Enter a[%d][%d]:",i,j);
		   scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter value of b:-");
	for(i=0;i<n;i++){
		for(j=0;j<=m;j++){
			printf("Enter b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	
	printf(" even numbers are: ");
	printf("\n");
	
	p=&a[i][j]+b[i][j];
	
     for(i=0;i<n;i++){
     	for(j=0;j<m;j++){
     		if(p%2==0){
     			printf("%d",p);
			 }
		 }
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
}
