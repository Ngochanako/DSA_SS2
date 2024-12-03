#include<stdio.h>
#include<stdlib.h>
void deleteElement(int *arr,int *n,int k){
	for(int i=0;i<*n;i++){
		if(arr[i]==k){
			for(int j=i;j<*n;j++){
				arr[j]=arr[j+1];
			}
			(*n)--;
			break;
		}
	}
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	//cap phat mang dong
	int *arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//goi ham xoa
	deleteElement(arr,&n,k);
	//in mang moi
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//giai phong bo nho
	free(arr);
}
