#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    cout << ((w*(k+k*w))/2<=n?0:((w*(k+k*w))/2)-n);
}

// (w*(k+k*w))/2