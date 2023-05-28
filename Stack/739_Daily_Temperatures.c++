// Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

 

// Example 1:

// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
// Example 2:

// Input: temperatures = [30,40,50,60]
// Output: [1,1,1,0]
// Example 3:

// Input: temperatures = [30,60,90]
// Output: [1,1,0]
 

// Constraints:

// 1 <= temperatures.length <= 105
// 30 <= temperatures[i] <= 100

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>a(n);
        stack<pair<int,int>>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top().second<t[i]){
                a[s.top().first]=i-s.top().first;
                s.pop();
            }
            s.push({i,t[i]});
        }
        return a;
    }
};

// alternate 
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
         ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=t.size();
        vector<int>a(n);
        int h=0;
        for(int i = n - 1; i >= 0; --i)
        {
            if(t[i] >= h)
                h = t[i];
            else
            {
                int d = 1;
                while(t[i] >= t[i+d])
                    d += a[i+d];
                    a[i] = d;
            }
        }
        return a;
    }
};
