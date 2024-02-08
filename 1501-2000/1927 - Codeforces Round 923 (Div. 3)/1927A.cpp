#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, n1=0, n2=0;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        n1=0, n2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                n1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                n2=i;
                break;
            }
        }
        cout << n2-n1+1 << '\n';
        
    }
    return 0;
}