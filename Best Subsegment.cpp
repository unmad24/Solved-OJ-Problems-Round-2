#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n)
{
    int maxMean = 0;
    for (int i = 1; i < n; i++)
        maxMean = max(maxMean,(arr[i] + arr[i - 1]) / 2);

    int ans = 0;
    int subarrayLength = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] >= maxMean)
            ans = max(ans, ++subarrayLength);
        else
            subarrayLength = 0;

    return ans;
}

int main()
{
    int arr[10001],n;
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    cout << longestSubarray(arr, n)<<endl;

    return 0;
}

