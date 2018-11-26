#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t && t!=0)
    {
        long int ayo=0;
       long int hieght=0;
        while(t--)
        {
            int d,p,u;
            cin>>d>>p>>u;
            if(hieght<u)
            {
                hieght=u;
                ayo=d*p*u;
            }
            else if(hieght==u)
            {

                long int volume=p*d*u;
                ayo=max(ayo,volume);
            }
        }
        cout<<ayo<<endl;


    }
    return 0;
}
