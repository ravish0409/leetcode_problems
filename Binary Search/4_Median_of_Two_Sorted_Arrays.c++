// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        int i=0,j=0;
        while(i<n1.size() && j<n2.size())
        {
            if(n1[i]<=n2[j])
            {
                ans.push_back(n1[i]);
                i++;
            }
            else
            {
                ans.push_back(n2[j]);
                j++;
            }
        }
        while(i<n1.size())
        {
            ans.push_back(n1[i]);
            i++;
        }
        while(j<n2.size())
        {
            ans.push_back(n2[j]);
            j++;
        }
        double res;
        if(ans.size()%2 == 0)
        {
            int s=0;
            int e=ans.size()-1;
            int mid=s+(e-s)/2;
            res=(ans[mid] + ans[mid+1])/2.0;
        }
        else
        {
            int s=0;
            int e=ans.size()-1;
            int mid=s+(e-s)/2;
            res = ans[mid];
        }
        return res;
    }
};