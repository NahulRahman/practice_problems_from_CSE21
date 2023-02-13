#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int sum_level(int n,int x,int a[x][x])
{
    if(n>=0)
    {
        for(int i=0;i<=n;++i) a[n][i]=a[n+1][i]+a[n+1][i+1];
        return sum_level(n-1,x,a);
    }
    return 0;
}

int main()
{
    print("Number of levels: "); int n; scan("%d",&n);
    print("Input array: ");
    int a[n][n];
    for(int i=0;i<n;++i) scan("%d",&a[n-1][i]);
    sum_level(n-2,n,a);
    for(int i=0;i<n;++i)
    {
        for(int k=0;k<=i;++k) print("%d ",a[i][k]);
        print(endl);
    }
    return 0;
}
