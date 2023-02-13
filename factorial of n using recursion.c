#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int fact(int n)
{
    if(n>1) return n*fact(n-1);
    return n;
}

int main()
{
    int n; print("Input the value of n: ");
    scan("%d",&n);
    print("Factorial of %d is: %d",n,fact(n));
    return 0;
}
