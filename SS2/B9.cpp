#include<stdio.h>
int b[100001]={0};
int main(){
	int n,x;
	scanf("%d",&n);
	int max=0,cnt=0;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		b[x+10000]++;
		if(b[x+10000]>cnt) {
			cnt=b[x+10000];
			max=x;
		}		
	}
    printf("%d",max);
}
