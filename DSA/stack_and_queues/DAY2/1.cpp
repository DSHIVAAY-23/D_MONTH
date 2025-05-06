#include<bits/stdc++.h>

using namespace std;


//infix to posfix

string infixtopostfix(string s){
    stack<char> st;
    string ans = "";
    for(int i =0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'){
          ans += s[i];
        };
        else if (s[i]== '('){}
        while(st.empty()&& st.top() != '('){
            ans += st.top();
            st.pop();
        }
        st.pop();

        else if(s[i]==)

    }

}