#include<stdio.h>


void swap(int *a,int *b){
	int x=*a;
	*a=*b;
	*b=x;
}
int partition(int a[],int low,int high){
	int i=low-1;
	int pivot=a[high];
	for(int j=low;j<high;j++){
		if(a[j]<=pivot){
		    i++;
			swap(&a[i],&a[j]);	
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}
void quickSort(int a[],int l,int r){
	if(l>=r){
		return;
	}
	int n=partition(a,l,r);
	quickSort(a,0,n-1);
	quickSort(a,n+1,r);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
