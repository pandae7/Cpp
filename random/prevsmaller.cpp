vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> G;
    stack<int> s;
    G.push_back(-1);
    s.push(A[0]);
    for(int i = 1; i < A.size();i++){
        
        if(A[i] > s.top()){
            G.push_back(s.top());
        }
        else{
            s.push(A[i]);
            G.push_back(-1);
        }
    }
    
    return G;
}
