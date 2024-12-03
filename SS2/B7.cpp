#include<stdio.h>
#include<stdlib.h>
void find1(int *a,int k,int n){
	int *b=(int *)calloc(k+1,sizeof(int));
	for(int i=0;i<n;i++){
		int v=k-a[i];
		if(v>0&&b[v]>0){
			printf("%d %d\n",a[i],v);
		}
		b[a[i]]=1;
	}
}
void find2(int *a,int k,int n){
	//sort array inc
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	// find
	int l=0,r=n-1;
    while(l<r){
    	if(a[l]+a[r]>k){
    		r--;
		}else if(a[l]+a[r]==k){
			printf("%d %d\n",a[l],a[r]);
			l++;
			r--;
		}else{
			l++;
		}
	}
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	//cap phat mang
	int *a=(int *)malloc(n*sizeof(int));
	//nhap mang
	printf("Nhap mang :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//C1 su dung hashmap
    find1(a,k,n);
    //C2 su dung 2 con tro
	find2(a,k,n);
	free(a);
}
