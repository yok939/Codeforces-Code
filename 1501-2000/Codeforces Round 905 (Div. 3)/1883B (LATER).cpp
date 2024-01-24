#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k;
    string s;
    vector<int> alphabet(26, 0);
    cin >> t;
    while(t--){
        int odd=0, even=0;
        cin >> n >> k >> s;
        int final_len=n-k;
        for(auto c:s){
            alphabet[c-'a']++;
        }
        while(k){
            bool have_odd=false;
            for(int i=0;i<26;i++){
                if(alphabet[i]!=0&&alphabet[i]%2){
                    have_odd=true;
                }
            }
            if(have_odd){
                for(int i=0;i<26;i++){
                    if(alphabet[i]!=0&&alphabet[i]%2){
                        alphabet[i]--;
                        k--;
                    }
                }
            }
            else{
                for(int i=0;i<26;i++){
                    if(alphabet[i]!=0&&alphabet[i]%2==0){
                        alphabet[i]--;
                        k--;
                    }
                }
            }
        }
        for(int i=0;i<26;i++){
            if(alphabet[i]!=0){
                if(alphabet[i]%2){
                    odd++;
                }
                else{
                    even++;
                }
            }
        }
        if(s.length()%2){
            if(odd==1&&even>=0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            if(odd==0&&even>=1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}