#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    int n;
    scanf("%d",&n);
    ll x;
    scanf("%lld",&x);
    int a[n+2];
    for(int i = 1 ; i <= n ;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i = 1 ; i <= n; i++){
        for(int j = i ; j <= n ;j++){
            if((ll)a[i]*a[i] + (ll)a[j] == x){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
