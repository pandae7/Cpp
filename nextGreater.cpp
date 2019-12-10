vector<int> Solution::nextGreater(vector<int> &A) {
    
    vector<int> ans;
    ans.resize(A.size());

    stack<int> st;
    
    for (int i = A.size()-1; i >= 0; i--) {
        while (!st.empty() && st.top() <= A[i]) st.pop();
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }
        st.push(A[i]);
    }
    return ans;
}