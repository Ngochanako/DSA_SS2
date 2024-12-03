#include<stdio.h>
#include<stdlib.h>

void mergeArray(int *a,int *b,int *n,int m){
	int j=*n;
	for(int i=0;i<m;i++){
		a[j]=b[i];
		j++;
	}
	(*n)+=m;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	//cap phap mang dong
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(m*sizeof(int));
	//nhap mang
	printf("Nhap mang 1:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Nhap mang 2:");
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	//goi ham gop mang
	mergeArray(a,b,&n,m);
	//in mang moi
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
