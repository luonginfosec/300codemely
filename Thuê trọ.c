#include<stdio.h>
#include<math.h>
#define ll long long 
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[n+2];
	int b[n+2];
	int cnt = 1;
	for(int i = 1 ; i <= n ;i++){
		scanf("%d",&a[i]);
		if(a[i] != 0 && a[i] <= k && i!=m){
			b[cnt] = i;
			cnt++;
		}
	}
	if(cnt!=1){
		int min = abs(b[1]-m);
		for(int i = 1; i <= cnt ;i++){
	        if(abs(b[i]-m) <= min){
	            min = abs(b[i]-m);
	        }
    	}
    	printf("%d",min*10);
	}
	else{
		printf("-1");
	}	
}
