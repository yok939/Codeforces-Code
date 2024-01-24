#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, space=1, time=0;
    string pin;
    cin >> t;
    while(t--){
        space=1, time=0;
        cin >> pin;
        for(int i=0;i<4;i++){
            if(space==pin[i]-'1'+1){
                time++;
            }
            else{
                if(pin[i]=='0'){
                    time+=abs(10-space)+1;
                    space=10;
                }
                else{
                    time+=abs((pin[i]-'1'+1)-space)+1;
                    space=pin[i]-'1'+1;
                }
            }
            
        }
        cout << time << '\n';
        
    }
}