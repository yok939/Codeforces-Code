#include <bits/stdc++.h>

using namespace std;

int main(){
    int x=0, n;
    string input;
    cin >> n;
    while(n--){
        cin >> input;
        if(input[0]=='+'||input[2]=='+') x++;
        else if(input[0]=='-'||input[2]=='-') x--;
    }
    cout << x;

}