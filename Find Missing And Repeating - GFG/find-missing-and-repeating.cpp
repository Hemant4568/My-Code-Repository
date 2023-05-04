//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
         sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            ans.push_back(arr[i]);
            arr.erase(arr.begin()+i);
            break;
        }
        
    }
    
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=j+1){
        ans.push_back(j+1);
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