#include<bits/stdc++.h>

using namespace std;

struct data{
    string name;
    int date, month , year;
};

bool cmp(data a, data b)
                    {


    if(a.year==b.year)
    {
        if(a.month==b.month)
        {
           return a.date<b.date;
        }
        else
             return a.month<b.month;
    }
    else
        return a.year<b.year;
}


int main()
{
    int n;
    cin>>n;
        data ara[100];
        string a;
        int d, m, y;
        for(int i=0; i<n; i++)
        {
            cin>>a>>d>>m>>y;
            ara[i].name = a;
            ara[i].date = d;
            ara[i].month = m;
            ara[i].year = y;
        }
        sort(ara, ara+n, cmp);

        cout<<ara[n-1].name<<endl<<ara[0].name<<endl;

    return 0;
}
