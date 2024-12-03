#include<stdio.h>
int b[200001]={0};
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		b[x+100000]++;		
	}
    for(int i=-100000;i<100000;i++){
    	if(b[i+100000]>0){
    		printf("Phan tu %d xuat hien %d lan\n",i,b[i+100000]);
		}
	}
}
