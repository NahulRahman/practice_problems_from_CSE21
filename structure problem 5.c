#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

struct complex
{
    int r,c;
};

int main()
{
    print("Enter numbers: "); int n; scan("%d",&n);
    struct complex cmp[n];
    int real=0,imaginary=0;
    for(int i=0;i<n;++i)
    {
        print("Number %d (r,i): ",i+1); scan("%d %d",&cmp[i].r,&cmp[i].c);
        real+=cmp[i].r; imaginary+=cmp[i].c;
    }
    print("The sum is: %d+%di",real,imaginary);
    return 0;
}
