// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
 

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="[{}]{";
    stack<char>a;
    unordered_map<char,char>m={{'[',']'},{'(',')'},{'{','}'}};
    if( m.find(s[0])==m.end() ||  m.find(s[s.size()-1])!=m.end()){
        cout<<"no jhjhj ";
        exit;
    }
    for(auto &x:s){
        if( m.find(x)!=m.end()){
             a.push(x);
             }
        else{
           
           
            if(a.empty() || m[a.top()]!=x){
                
                cout<<"no jajaja false";
                exit;
            }
            else{
                a.pop();
            }

        }
            
    }
    if(a.empty()){
        cout<<"yes";
    }
    

    return 0;
}
