class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            char cur =s[i];
            if(cur =='['||cur =='{'||cur =='('){
                st.push(cur);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                if((cur==']'&& top=='[')||(cur=='}'&& top=='{')||(cur==')'&& top=='(')){
                    st.pop();
                }
                else{
                     return false;
                }
            }
        }
        return st.empty();
    }
};
