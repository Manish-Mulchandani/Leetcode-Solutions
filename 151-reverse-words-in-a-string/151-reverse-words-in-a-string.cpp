class Solution {
public:
    string reverseWords(string s) {
        vector<string> A;
        string a="";
        for(auto &i:s)
        {
            if(i==' ' && !a.empty())
            {
                A.push_back(a);
                a="";
            }
            if(i!=' ')
                a.push_back(i);
        }
        if(!a.empty())
            A.push_back(a);
        reverse(A.begin(),A.end());
        a="";
        for(auto &i:A)
        {
            a.append(i);
            a.push_back(' ');
        }
        a.pop_back();
        return a;
    }
};