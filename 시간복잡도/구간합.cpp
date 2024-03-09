#include <stdio.h>
long long int n,m,sum[1000010]={0,},a[1000010],b[1000010],c[1000010];
int main()
{
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&c[i]);
        sum[i]=sum[i-1]+c[i];
    }
    for(int i=1;i<=m;i++) scanf("%lld %lld",&a[i],&b[i]);
    for(int i=1; i<=m;i++) printf("%lld\n",sum[b[i]]-sum[a[i]-1]);
}
