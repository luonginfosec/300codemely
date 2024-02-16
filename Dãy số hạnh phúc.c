#include<stdio.h>
#include<math.h>
#define ll long long 
void solve(ll n){
	if(n!=1){
		if(n%2==0){
		n = n /2;
		}
		else{
			n = n*3 + 1;
		}
		printf("%lld ",n);
		if(n!=1){
			solve(n);
		}
	}
	
}
int main(){
	ll n;
	scanf("%lld",&n);
	printf("%lld ",n);
	solve(n);
}
