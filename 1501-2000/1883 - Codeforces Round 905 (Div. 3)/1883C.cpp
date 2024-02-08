#include <bits/stdc++.h>

using namespace std;


int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a(n, 0);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int min_change=INT_MAX;
        if(k==4){
            int add_4=0, add_3=0, add_2=0, add_1=0;
            for(int i=0;i<n;i++){
                if(a[i]%4==0){
                    add_4++;
                }
                else if(a[i]%4==3){
                    add_3++;
                }
                else if(a[i]%4==2){
                    add_2++;
                }
                else if(a[i]%4==1){
                    add_1++;
                }
            }
            if(add_4||(add_2>=2)){
                cout << 0;
            }
            else if(add_4==0&&(add_2==1||add_3)){
                cout << 1;
            }
            else if(add_4==0&&add_2==0&&(add_1||add_3==1)){
                cout << 2;
            }
            cout << '\n';
            continue;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]%k==0){
                    min_change=0;
                }
                else{
                    min_change=min(abs(k-(a[i]%k)), min_change);
                }
            }
        }
        cout << min_change <<'\n';
    }
}