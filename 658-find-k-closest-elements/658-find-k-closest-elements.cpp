class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        /*M-I Queue */
        queue<int> q;
        q.push(arr[0]);
        for(int i=1; i<arr.size(); i++)
        {
            if(q.size()==k)
            {
                if(abs(arr[i]-x)<abs(q.front()-x))
                {
                    q.pop();
                    q.push(arr[i]);
                }
                else if(abs(arr[i]-x)==abs(q.front()-x))
                    continue;
                else
                    break;
            }
            else 
                q.push(arr[i]);
        }
        vector<int> ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
            
        
    }
};