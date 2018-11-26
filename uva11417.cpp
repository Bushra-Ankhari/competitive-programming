#include<bits/stdc++.h>
using namespace std;
int main(){

int x;
while(cin>>x && x!=0){
        int gcd=0;
        int sum=0;

    for(int i=1;i<x;i++){
        for(int j=i+1;j<=x;j++){
            int gcd=__gcd(i,j);
             sum=sum+gcd;
        }
    }
    cout<<sum<<endl;

}



return 0;
}
