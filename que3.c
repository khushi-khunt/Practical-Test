/*
Q.3 WAP to find Fibonacci Series to n Numbers and Store it into textfile. 

*/
#include<stdio.h>
void f(int n, FILE *file) {
	int i;
    int a = 0, b = 1, c;

    fprintf(file, "%d ", a);
    fprintf(file, "%d ", b);
 
    for( i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        fprintf(file, "%d ", c);
    }
}

int main() {
    int n;
    FILE *file;

    printf("Enter the elements:  ");
    scanf("%d", &n);

    file = fopen("fibonacci.txt", "w");
    if(file == NULL) {
        printf("file could not open\n");
    }

    f(n, file);


    printf("Fibonacci series is written in 'fibonacci.txt'.\n");

   
}
