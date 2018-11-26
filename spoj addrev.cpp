#include<bits/stdc++.h>
#include <string>
using namespace std;
 int reverse(int x)
{
	int result = 0;
	while (x > 0)
	{
		result *= 10;
		result += (x % 10);
		x /= 10;
	}

	return result;
}

int main(){

int n;
cin>>n;
while(n--){

    string x,y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
   // cout<<x<<endl;
    reverse(y.begin(),y.end());
   // cout<<y<<endl;
    int n= stoi(x);
    int o= stoi(y);
    int sum=n+o;

//cout<<sum<<endl;

cout<<reverse(sum)<<endl;


}


return 0;
}
