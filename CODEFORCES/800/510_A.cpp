#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 != 0){
            for(int i = 0 ; i < m ; i++)
                cout << "#";
        cout << endl;
        }
        else{
            if(i % 4 != 0){
                for(int i = 0 ; i < m - 1 ; i++)
                    cout << ".";
                cout << "#";
                cout << endl;
            }
            else{
                cout << "#";
                for(int i = 0 ; i < m - 1 ; i++)
                    cout << ".";
                cout << endl;
            }
        }
    }
}

int main(){
    // int tt;cin >>tt;
    // while(tt--)
        solve();
}
