class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<map<int,int>> A(31);
        int a;
        for(int i=0; i<30; i++)
        {
            a=(pow(2,i));
            while(a)
            {
                A[i][a%10]++;
                a/=10;
            }
        }
            
        map<int,int> M;
        while(n)
        {
            M[n%10]++;
            n/=10;
        }
        for(int i=0; i<30; i++)
        {
            if(M==A[i])
                return true;
        }
        return false;
        
    }
};