class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int hash[100001]={0};
        for(int i:arr)
        {
            hash[i]++;
        }
        sort(hash, hash+100001, greater<int>());
        int sum=0;
        int ans=0;
        int j=0;
        while(sum<n/2)
        {
            sum+=hash[j];
            j++;
            ans++;
        }
        return ans;
    }
};