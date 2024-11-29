#include<stdio.h>
int main(){
	int arr1[2][2];
	int arr2[2][2];
	int result[2][2];
	
	printf("Enter elements of the first matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("Enter elements of the second matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d", &arr2[i][j]);	
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	printf("Sum of the matrices is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
				printf("%d ",result[i][j]);
			}
			printf("\n");
		}
		

} 
