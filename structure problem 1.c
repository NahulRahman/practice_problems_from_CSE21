#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

struct bowler
{
    char name[30];
    int match,over;
    dub rpo;
};

void most_inexperienced_bowler(char a[],int n,struct bowler ball[n])
{
    int over=10e8;
    for(int i=0;i<n;++i)
    {
        if(over>ball[i].over)
        {
            over=ball[i].over; strcpy(a,ball[i].name);
        }
    }
}

int main()
{
    int n; print("Total number of bowlers: "); scan("%d",&n);
    struct bowler ball[n];
    for(int i=0;i<n;++i)
    {
        getchar();
        print("Name of bowler %d: ",i+1); gets(ball[i].name);
        print("Matches played by bowler %d: ",i+1); scan("%d",&ball[i].match);
        print("Bowled overs by bowler %d: ",i+1); scan("%d",&ball[i].over);
        print("RPO of bowler %d: ",i+1); scan("%lf",&ball[i].rpo);
        if(i<n-1) print("---------------------------------------------------"endl);
    }
    char a[30];
    most_inexperienced_bowler(a,n,ball);
    print("%s is the most inexperienced bowler!",a);
    return 0;
}
