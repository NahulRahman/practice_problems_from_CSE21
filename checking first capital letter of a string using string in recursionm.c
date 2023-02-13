#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

char check_cap(char a[],int i)
{
    if(a[i]!='\0' && (a[i]>='A' && a[i]<='Z')) return a[i];
    return check_cap(a,i+1);
}

int main()
{
    char a[100]; print("Input string: "); gets(a);
    print("The first capital letter in %s is- %c",a,check_cap(a,0));
    return 0;
}
