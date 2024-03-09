#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,k,c;
    cin>>n>>d>>k>>c;
    vector<int> dish(n+k);
    for(int i=0;i<n;i++)
        cin>> dish[i];
    for (int i = 0; i < k; i++)
        dish[n+i]=dish[i];

    vector<int> count(d+1, 0);
    int types = 0;
    for(int i = 0; i < k; i++) {
        if(count[dish[i]]++ == 0) types++;
    }

    int max = types;
    for(int i = k; i < n+k; i++) {
        if(count[dish[i]]++ == 0) types++;
        if(--count[dish[i-k]] == 0) types--;
        max = std::max(max, types + (count[c] == 0));
    }

    cout<<max;
}
