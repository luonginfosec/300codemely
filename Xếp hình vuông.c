#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a,b;
        if((int)sqrt(n)*(int)sqrt(n) == n){
            a = (int)sqrt(n);
            b = a;
            printf("%d %d\n",a,b);
        }
        else{
            int temp = sqrt(n) + 1 ;
            for(int i = temp  ; i >= 1 ;i--){
                if(n%i == 0 ){
                    if(n/i >= i){
                        printf("%d %d\n",i,n/i);
                        
                    }
                    else{
                        printf("%d %d\n",n/i,i);
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
