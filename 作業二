#include <stdio.h>
int main(){
	int n,cnt;
	while(true){
		printf("請輸入需要質因數分解的數\n或是輸入0使程式結束\n"); 
		scanf("%d",&n);
		if(n==0){
			return 0;
		}
		printf("%d=",n);
		for(int i=2;i<=n;i++){
			if(n%i==0){
				cnt=0;
				while(n%i==0){
					n=n/i;
					cnt++;
				}
				if(cnt==1)printf("%d",i);
				else printf("%d^%d",i,cnt);
				if(n!=1)printf("*");
			}
		}
		printf("\n");
	}
}
