#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

struct line
{
    dub x1,y1,x2,y2;
};

dub calc_len(dub a,dub b,dub c,dub d)
{
    dub ans=(a-c)*(a-c)+(b-d)*(b-d);
    return sqrt(ans);
}

int main()
{
    print("Number of lines: "); int n; scan("%d",&n);
    struct line l[n];
    for(int i=0;i<n;++i)
    {
        print("For line %d, Coordinates of Point 1(x,y): ",i+1); scan("%lf,%lf",&l[i].x1,&l[i].y1);
        print("For line %d, Coordinates of Point 2(x,y): ",i+1); scan("%lf,%lf",&l[i].x2,&l[i].y2);
        print("------------------------------------------------------------" endl);
    }
    dub len=0; int num;
    for(int i=0;i<n;++i)
    {
        dub ans=calc_len(l[i].x1,l[i].y1,l[i].x2,l[i].y2);
        if(ans>len)
        {
            len=ans; num=i+1;
        }
    }
    print("Line %d is the largest line!",num);
    return 0;
}
