class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end());
        int n=people.size();
        vector<vector<int>> ans;
        vector<int> A;
        A.push_back(-1);
        A.push_back(-1);
        for(int i=0; i<n; i++)
        {
            ans.push_back(A);
        }
        int x;
        for(auto &i:people)
        {
            x=i[1];
            for(int j=0; j<ans.size(); j++)
            {
                if(x==0 && ans[j][0]==-1)
                {
                    ans[j]=i;
                    break;
                }
                if(ans[j][0]==-1 || ans[j][0]==i[0])
                    x--;
            }
        }
        return ans;
    }
};