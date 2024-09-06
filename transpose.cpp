#include<stdio.h>
int main(){
	int a,b;
	printf("enter the size of 2D array:");
	scanf("%d %d",&a,&b);
	int arr[a][b];
	printf("enter the elements of array:\n ");
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("entered elements are:\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("transpose of matrix is: \n ");
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
