#include<bits/stdc++.h>
using namespace std;
vector<int>getvect(string str){
    int tot=0;
    vector<int>rot;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
           tot= tot*10+(str[i]-'0');
        }
        if(str[i]==' '||i==n-1){
            if(tot!=0){
                rot.push_back(tot);
                tot=0;
            }
        }
    }
    return rot;
}
int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--)
    {
        string str;
        getline(cin,str);
        vector<int>v=getvect(str);
        int res=0;
        for(int i=0; i<v.size(); ++i)
        {
            for(int j=i+1; j<v.size(); j++){
                int gcd=__gcd(v[i],v[j]);
            if(res<gcd)
                res=gcd;
        }
        }
        cout<<res<<endl;




    }
}
