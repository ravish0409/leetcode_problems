// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8

class Solution {
public:
vector<string>a;
    void q(string s,int l,int r ){
        if(l==0 && r==0){
            a.push_back(s);

            return;
        }
        if(l>0){
            s.push_back('(');
            q(s,l-1,r);
            s.pop_back();
        } 
        
            if(r>l){
            s.push_back(')');
            q(s,l,r-1);
            s.pop_back();
        }
    }


    vector<string> generateParenthesis(int n) {
        string s="";
        q(s,n,n);
        return a;
    }
};