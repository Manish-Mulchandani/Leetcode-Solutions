class Solution {
public:
    string reverseWords(string s) {
        string word="";
        int j=-1,l=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ')
                word.push_back(s[i]);
            else 
            {
                reverse(word.begin(), word.end());
                j++;
                l=0;
                for(int k=j; k<i; k++, l++)
                    s[k]=word[l];
                j=i;
            }
        }
        reverse(word.begin(), word.end());
        j++;
        l=0;
        for(int k=j; k<s.length(); k++, l++)
            s[k]=word[l];
        return s;
    }
};