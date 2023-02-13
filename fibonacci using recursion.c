#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int fib(int n)
{
    if(n<1) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n; print("Number of terms for the series: "); scan("%d",&n);
    print("The series:"endl);
    for(int i=0;i<n;++i)
    {
        print("%d ",fib(i+1));
    }
    return 0;
}
