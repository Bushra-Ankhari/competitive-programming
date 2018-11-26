#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int i,t,n;
	string s1,s2;
	map <string , string> mp;
	map <string , string> :: iterator it;
	cin >> t;
	getchar();


	for(i=0;i<t;i++){
		getline(cin , s1);
		getline(cin , s2);
		mp[s1] = s2;
	}

	cin >> n;
	getchar();

	for(i=0;i<n;i++){
		getline(cin , s1);
		for(it=mp.begin();it!=mp.end();it++){
			if(it->first==s1){
				cout << it->second << endl;

			}
			else if(it->second==s1){
				cout << it->first << endl;

			}

		}
	}
	return 0;
}
