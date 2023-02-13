#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int check_even(int a,int b,int *arr)
{
    if(a>b) return 0;
    else
    {
        if(a&1) arr[a]++;
        return check_even(a+1,b,arr);
    }
}

int main()
{
    int a,b; print("Enter the range- "); scan("%d:%d",&a,&b);
    int ar[b+1];
    for(int i=0;i<b+1;++i) ar[i]=0;
    check_even(a,b,ar);
    print("All even numbe(s) in range: ");
    for(int i=a;i<b+1;++i)
    {
        if(!ar[i]) print("%d ",i);
    }
    print(endl"All odd number(s) in range: ");
    for(int i=a;i<b+1;++i)
    {
        if(ar[i]) print("%d ",i);
    }
    return 0;
}
