#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> trace(n, 0);
        vector<char> result;
        vector<int> alphabet(n, 0);
        for(int i=0;i<n;i++) cin >> trace[i];
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<26;j++){
                if(alphabet[j]==trace[i]){
                    result.push_back(char(j+'a'));
                    alphabet[j]++;
                    break;
                }
            }
        }
        for(auto c:result){
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}