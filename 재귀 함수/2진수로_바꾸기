#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool> v;
int i;

void he(int n){
    if(n==0) return;
    if(n%2==0) v.push_back(0);
    else v.push_back(1);
    he(n/2);
}
void print(){
    cout << v[i];
    i++;
    if(i==v.size()) return;
    print();
}
int main(){
    int n;
    cin >> n;
    he(n);
    reverse(v.begin(),v.end());
    print();
}
