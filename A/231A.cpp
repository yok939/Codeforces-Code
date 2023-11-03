#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, checker=0, solvenow=0, temp;
    cin >> n;
    vector<int> prall(n);
    for(int i=0;i<n;i++){
        checker=0;
        for(int j=0;j<3;j++){
            cin >> temp;
            if(temp==1){
                checker++;
            }
        }
        if(checker>=2){
            solvenow++;
        }
    }
    cout << solvenow;
}