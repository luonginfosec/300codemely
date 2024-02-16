#include<stdio.h>
#include<math.h>
#define ll long long 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		ll sum = 0;
		for(int i = 0 ; i < n ;i++){
			scanf("%d",&a[i]);
			sum += a[i];
		}
		ll x = (ll)(sum/n);
		if(abs(sum-n*x) <= abs(sum-n*(x+1))){
			printf("%lld\n",x);
		}
		else{
			printf("%lld\n",x+1);
		}
	}
}
