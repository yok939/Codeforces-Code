#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, member=0;
    cin >> n >> k;
    vector<int> score(n);
    for (int i=0;i<n;i++){
        cin >> score[i];
    }
    for (int i=0;i<n;i++){
        if(score[i]>=score[k-1]&&score[i]>0){
            member++;
        }
    }
    cout << member;
}