#include<iostream>
using namespace std;

int pas(int n, int k){
    if(k == 0 || k == n) return 1;
    else return pas(n-1, k-1) + pas(n-1, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << pas(n-1, k-1);
    return 0;
}
