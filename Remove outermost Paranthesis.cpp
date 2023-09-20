class Solution {
public:
    string removeOuterParentheses(string s) {
       stack<char>st;
       string ans= "";
       for(int i=0; i<s.size(); i++)
       {
           if(st.empty() && s[i]=='(')
           {
               st.push(s[i]);
           }
           else if(s[i]=='(')
           {
               st.push(s[i]);
               ans += s[i];
           }
           else{
               st.pop();
               if(!st.empty())
               {
                   ans+= s[i];
               }
           }

       }
       return ans;
    }
};
