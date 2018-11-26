#include<iostream>
#include <cstdio>
#include <map>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> vec;
map<int, int> counted;

int main() {
	int n;

	while (cin>>n && n!= EOF) {
		if (counted.count(n) == 0) {
			counted[n] = 1;
			vec.push_back(n);
		} else
			counted[n] = counted[n] + 1;
	}

	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" "<<counted[vec[i]]<<endl;
	}

	return 0;
}
