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
        for(int i=0;i<26;i++){
            alphabet[i]=0;
        }
        for(auto c:s){
            alphabet[c-'a']++;
        }
        //Checking odd and even
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
        //Final result
       if(odd-k<=1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
    return 0;
}


/*
2 1
ba
--YES
3 1
abb
--YES
3 2
abc
6 2
bacacd
6 2
fagbza
6 2
zwaafa

*/