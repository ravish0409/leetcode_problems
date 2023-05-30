// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4
// Example 2:

// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1

class Solution {
public:
 Solution (){
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 }
    int find(vector<int>& q,int l,int r, int t){
        if (l > r) {
            return -1; // Target was not found
        }
        int mid=l+(r-l)/2;
         if (q[mid]==t){
            return mid;
        }
         else   if (q[mid]>t){
                return find(q,l,mid-1,t);
            }
            else{
                return find(q,mid+1,r,t);
            }
    }
    int search(vector<int>& n, int t) {
        return find(n,0,n.size()-1,t);
    }
};