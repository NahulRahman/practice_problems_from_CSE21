#include<stdio.h>
#include<math.h>
#include<string.h>
#define scan scanf
#define print printf
#define dub double
#define dubb long double
#define in long long
#define endl "\n"

struct birthday
{
    int day,month,year;
};

struct course
{
    char name[30];
    int no;
    dub cgpa,credit;
};

struct students
{
    char name[30];
    int id,level,term;
    struct course cr[2];
    struct birthday bd;
};

int cal_age(int d,int m,int y)
{
    int dc=0,mc=0,year;
    if(d>1) ++dc;
    if(dc+m>1) ++mc;
    return 2022-(y+mc); //considering present day as 1st January 2022
}

int main()
{
    print("Number of students: "); int n; scan("%d",&n);
    struct students st[n];
    for(int i=0;i<n;++i)
    {
        getchar();
        print("Info of student %d:"endl,i+1);
        scan("%s %d %d %d",&st[i].name,&st[i].id,&st[i].level,&st[i].term);
        print("Course 1: "); scan("%s,%d,%lf,%lf",&st[i].cr[0].name,&st[i].cr[0].no,&st[i].cr[0].cgpa,&st[i].cr[0].credit);
        print("Course 2: "); scan("%s,%d,%lf,%lf",&st[i].cr[1].name,&st[i].cr[1].no,&st[i].cr[1].cgpa,&st[i].cr[1].credit);
        print("Birthday: "); scan("%d %d %d",&st[i].bd.day,&st[i].bd.month,&st[i].bd.year);
        print("----------------------------------------------------"endl);
    }
    int idd,cnt=0;
    char a[30];
    for(int i=0;i<n;++i)
    {
        if(cal_age(st[i].bd.day,st[i].bd.month,st[i].bd.year)>=18)
        {
            strcpy(a,st[i].name); idd=st[i].id; ++cnt;
        }
    }
    if(cnt) print("%s, having ID %d is eligible for taking COVID-19 vaccine!",a,idd);
    else print("No student is eligible for taking COVID-19 vaccine!");
    return 0;
}
