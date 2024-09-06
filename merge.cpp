#include<stdio.h>
int main(){
	int m,n,i,j,k;
	printf("enter the size of array 1 and array 2:");
	scanf("%d %d",&m,&n);
	
	int a[m],b[n];
	printf("enter the elements of first array in sorted  form:");
	
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	printf("enter the elements of second array in sorted  form:");
	
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	 j=0,i=0,k=0;
	int merge = m+n;
	int c[merge];
	while(i<m&&j<n){
		if(a[i]<b[j]){
			c[k++] = a[i++];
		}
		else{
			c[k++] = b[j++];
		}
		
	}
	while(i<m){
		c[k++] = a[i++];
	}
	while(j<n){
		c[k++] = b[j++];
	}
	printf("new sorted array is:");
	for( i=0;i<merge;i++){
		printf("%d ",c[i]);
	}
}
