#include<stdio.h>
int main()
{
	int arr[7]={34,55,7,28,12,59,28};
	int n=7;
	int temp;
		{
		for(int i=0 ; i < n ;i++){
		printf("%d ",arr[i]);
		}
		printf("\n");
    }
    {
    	for(int i= 0 ; i < n-1 ; i++){
    		for(int j=0 ; j < n-1-i ; j++){
    			if(arr[j]>arr[j+1]){
    				temp=arr[j];
    				arr[j]=arr[j+1];
    				arr[j+1]=temp;	
				}		
			}	
		}
	 }
		{
		for(int i=0 ; i < n ;i++){
		printf("%d ",arr[i]);
		}
		printf("\n");
    }
	

}
