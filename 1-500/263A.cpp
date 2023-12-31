#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y, temp=-1;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> temp;
			if(temp==1){x=j,y=i;}
		}
	}
	cout << abs(y-2)+abs(x-2);
	return 0;
}
