//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
         sort(arr.begin(),arr.end());
         long long int sum;
    vector<int>ans;
    if(n%2==0)
     sum=((n/2)*(n+1));
    else
     sum=n*((n+1)/2);

    long long int sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            ans.push_back(arr[i]);
            ans.push_back(sum-sum1+arr[i]);
            break;
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends