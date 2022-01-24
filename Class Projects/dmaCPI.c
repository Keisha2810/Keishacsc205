#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int *A;
	int *B;
	int *C;
	int a,b,c,d,e,f;
	int g,h,i,j,k,l;
	int m,n,o,p,q,r;
	
	A = (int*)malloc(100 * sizeof(int));
	B = (int*)malloc(100 * sizeof(int));
	C = (int*)malloc(100 * sizeof(int));
	
	if(A==NULL) {
	printf("Memory not allocated.\n");
	exit(0);
	}
	
	else {
	if(B==NULL) {
	printf("Memory not allocated.\n");
	exit(0);
	}
	else{
	if(C==NULL) {
	printf("Memory not allocated.\n");
	exit(0);}
	
	else{
	printf("This is a program for addition of two matrices.\n");
	printf("\n");
	
	printf("Input below the values in Matrix A.\n");
	printf("Enter the value of Matrix A row1 column1 element: ");
	scanf("%d", &a);
	printf("Enter the value of Matrix A row2 column1 element: ");
	scanf("%d", &b);
	printf("Enter the value of Matrix A row3 column1 element: ");
	scanf("%d", &c);
	printf("Enter the value of Matrix A row1 column2 element: ");
	scanf("%d", &d);
	printf("Enter the value of Matrix A row2 column2 element: ");
	scanf("%d", &e);
	printf("Enter the value of Matrix A row3 column2 element: ");
	scanf("%d", &f);
	printf("\n");
	
	int A[2][3] = {{a,b,c},{d,e,f}};
	printf("The format of the matrix A is : \n");
	for(int j=0; j<3; ++j){
	for(int i = 0; i<2; ++i){
			printf("%d", A[i][j]);
			printf("\t");}
			printf("\n");}

	printf("\n");
	printf("Input below the values in Matrix B.\n");
	printf("Enter the value of Matrix B row1 column1 element: ");
	scanf("%d", &g);
	printf("Enter the value of Matrix B row2 column1 element: ");
	scanf("%d", &h);
	printf("Enter the value of Matrix B row3 column1 element: ");
	scanf("%d", &i);
	printf("Enter the value of Matrix B row1 column2 element: ");
	scanf("%d", &j);
	printf("Enter the value of Matrix B row2 column2 element: ");
	scanf("%d", &k);
	printf("Enter the value of Matrix B row3 column2 element: ");
	scanf("%d", &l);
	
	int B[2][3] = {{g,h,i},{j,k,l}};
	printf("The format of the matrix B is : \n");
	for(int j=0; j<3; ++j){
	for(int i = 0; i<2; ++i){
			printf("%d", B[i][j]);
			printf("\t");}
			printf("\n");}
			
	printf("\n");
	m= a + g;
	n= b + h;
	o= c + i;
	p= d + j;
	q= e + k;
	r= f + l;
	int C[2][3] = {{m,n,o},{p,q,r}};
	printf("Matrix C is the sum of matrix A and matrix B.\n");
	printf("The format of the matrix C is : \n");
	for(int j=0; j<3; ++j){
	for(int i = 0; i<2; ++i){
			printf("%d", C[i][j]);
			printf("\t");}
			printf("\n");}
	}}}
	
	
return 0;	
}

