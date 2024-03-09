#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int maxSum = arr[0][0];
    for (int left = 0; left < n; left++) {
        int temp[n] = {0};
        for (int right = left; right < n; right++) {
            for (int i = 0; i < n; i++)
                temp[i] += arr[i][right];
            int sum = 0, maxSubSum = temp[0];
            for (int i = 0; i < n; i++) {
                if (sum <= 0)
                    sum = temp[i];
                else
                    sum += temp[i];
                maxSubSum = max(maxSubSum, sum);
            }
            maxSum = max(maxSum, maxSubSum);
        }
    }
    cout << maxSum;
}
