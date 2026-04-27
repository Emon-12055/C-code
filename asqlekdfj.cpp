#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    vector<int>a(n);
    for(int & i : a){
        cin >> i ;
    }

    for(int & i : a){
        if(i % 2 == 0){
            i++ ;
        }
    }
    for(int i : a){
        cout << i << " " ;
    }`
    return 0 ;
}
