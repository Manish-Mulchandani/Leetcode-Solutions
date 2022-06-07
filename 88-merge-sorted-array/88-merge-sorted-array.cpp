class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        m--;
        n--;
        int i=m+n+1;
        while(m>=0 && n>=0)
        {
            if(A[m]>B[n])
                A[i--]=A[m--];
            else 
                A[i--]=B[n--];
        }
        while(n>=0)
            A[i--]=B[n--];
    }
};