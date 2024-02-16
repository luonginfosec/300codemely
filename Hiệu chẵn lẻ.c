#include<stdio.h>
#include<math.h>
#define ll long long 
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	ll sum = 0;
	for(int i = 0 ; i < n ;i++){
		scanf("%d",&a[i]);
		if(i%2==0){
			sum-=a[i];
		}
		else{
			sum+=a[i];
		}
	}
	printf("%lld",sum);
}
