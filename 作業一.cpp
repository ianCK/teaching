#include <stdio.h>
int main(){
	int n;
	int flag;
	while(true){
		printf("輸入一個正整數，程式會判斷他是不是質數\n或是輸入0使程式結束\n");
		scanf("%d",&n);
		if(n == 0){
			return 0;
		}
		flag=1;
		for(int i=2;i<n;i++){
			if(n%i==0){
				flag=0; 
			}
		}
		if(flag==1)printf("%d是質數\n",n);
		else printf("%d不是質數\n",n); 
	}
}
