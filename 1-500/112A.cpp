#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1, s2;
	int s1_size=0, s2_size=0;
	cin >> s1 >> s2;
	for(int i=0;i<s1.length();i++)if(s1[i]>='A'&&s1[i]<='Z') s1[i]=s1[i]-'A'+'a';
	for(int i=0;i<s2.length();i++)if(s2[i]>='A'&&s2[i]<='Z') s2[i]=s2[i]-'A'+'a';
	cout << s1.compare(s2);
	return 0;
}
