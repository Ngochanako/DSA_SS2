#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int *a=(int *)malloc(n-1*sizeof(int));
	int *b=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n-1;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			printf("%d",i);
			break;
		}
	}
	
	free(a);
	free(b);
}
