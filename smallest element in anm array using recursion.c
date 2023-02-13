#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int min(int a[],int n,int mn)
{
    if(n>0)
    {
        if(a[n]<mn) mn=a[n];
        return min(a,n-1,mn);
    }
    return mn;
}

int main()
{
    int n; print("Enter the number of array elements: "); scan("%d",&n);
    int a[n],mn;
    print("Input array: "); scan("%d",&a[0]); mn=a[0];
    for(int i=1;i<n;++i) scan("%d",&a[i]);
    print("The smallest element: %d",min(a,n-1,mn));
    return 0;
}
