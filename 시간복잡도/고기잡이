#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int w, h;
    cin >> w >> h;
    int arr[n][m];
    int max = 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> arr[i][j];
    for (int i = 0; i <= n-w; i++)
    {
        for (int j = 0; j <= m-h; j++)
        {
            int web = 0;
            for (int x = i; x < i+w; x++)
            {
                for (int y = j; y < j+h; y++)
                {
                    web += arr[x][y];
                }
                
            }
            if (web > max) max = web;
        }
    }
    cout << max;
}
