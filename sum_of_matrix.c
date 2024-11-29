#include<stdio.h>
int main(){
	int r,c;
	int sum=0;
	printf("Enter row elements:",r);
	scanf("%d",&r);
	printf("Enter column elements:",c);
	scanf("%d",&c);
	int arr[r][c];
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum=sum+arr[i][j];
		}
	}
	printf("sum:%d",sum);
	

} 
