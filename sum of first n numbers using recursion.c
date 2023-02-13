#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int add(int n)
{
    if(n) return n+add(n-1);
    return n;
}

int main()
{
    int n; print("Input the value of n: ");
    scan("%d",&n);
    print("Sum of the numbers from 1 to %d: %d",n,add(n));
    return 0;
}
