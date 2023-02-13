#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

int check_palindrome(char a[],int n,int i)
{
    if(a[i]==a[n-1-i] && i<(n-1)/2) return check_palindrome(a,n,i+1);
    return i;
}

int main()
{
    char a[100]; print("Input word: "); gets(a);
    int n=strlen(a);
    if(check_palindrome(a,n,0)==(n-1)/2) print("The word is a palindrome");
    else print("The word is not a palindrome");
    return 0;
}
