Given an integer array arr, return the mean of the remaining integers after removing the smallest 5% and the largest 5% of the elements.

Answers within 10-5 of the actual answer will be considered accepted.

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int r=n/20;
double ans=0;
int term=0;
        for(int i=r;i<n-r;i++){
          ans+=arr[i];
          term++;  
        }
        return ans/term;
        
    }
};
