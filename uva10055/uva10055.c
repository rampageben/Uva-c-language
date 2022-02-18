#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//abs不吃long long
int main(void)
{
    long long i,j,n,m;
    long long sum;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        sum=n-m;
        if(sum<0){
            sum=sum*(-1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}