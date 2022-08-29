class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        map<int,long long> M;
        long long time=0;
        for(auto &i:tasks)
        {
            if(M.find(i)==M.end())
            {
                M[i]=time;
                time++;
            }
            else
            {
                if((time-M[i])>=(space+1))
                {
                    M[i]=time;
                    time++;
                }
                else
                {
                    time=(space+1)+M[i];
                    M[i]=time;
                    time++;
                }
            }
        }
        return time;
    }
};