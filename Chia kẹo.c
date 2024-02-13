#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,m;
		scanf("%lld%lld",&n,&m);
		ll a[n+1];
		for(ll i = 1 ; i <= n ; i++){
			scanf("%lld",&a[i]);		
		}
		ll sum = 0;
		for(ll i = 1 ; i <= n ; i++){
			ll people = a[i] + 1;
			if(m % people  == 0){
				sum += m / people;
			}
			else{
				sum += m%people + m/people;
			}
		
		}
		printf("%lld\n",sum);
	}
	return 0;
}
