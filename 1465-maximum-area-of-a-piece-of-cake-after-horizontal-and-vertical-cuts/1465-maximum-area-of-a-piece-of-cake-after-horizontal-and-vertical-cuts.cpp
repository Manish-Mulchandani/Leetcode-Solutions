class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& vert) {
        hori.push_back(0);
        vert.push_back(0);
        hori.push_back(h);
        vert.push_back(w);
        sort(hori.begin(), hori.end());
        sort(vert.begin(), vert.end());
        int a=0;
        for(int i=1; i<hori.size(); i++)
            a=max(a,hori[i]-hori[i-1]);
        int b=0;
        for(int i=1; i<vert.size(); i++)
            b=max(b,vert[i]-vert[i-1]);
        long long c=a;
        c*=b;
        return c%1000000007;
    }
};