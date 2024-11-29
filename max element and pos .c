#include<stdio.h>
int main(){
	int r,c,maxr,maxc;
	int max=0;
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
			if(arr[0][0]<arr[i][j]){
				max=arr[i][j];
				maxr=i;
				maxc=j;
			}
		}
	}
	printf("max:%d\n",max);
	printf("position:%d %d",maxr,maxc);
	
	

} 
