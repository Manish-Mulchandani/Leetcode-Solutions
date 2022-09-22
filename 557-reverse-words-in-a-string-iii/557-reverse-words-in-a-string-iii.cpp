class Solution {
public:
    string reverseWords(string s) {
        int j=0,k;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                k=i-1;
                while(j<k)
                {
                    swap(s[j],s[k]);
                    j++;
                    k--;
                }
                j=i+1;
            }
        }
        k=s.length()-1;
        while(j<k)
        {
            swap(s[j],s[k]);
            j++;
            k--;
        }
        return s;
        
    }
    /* M-II
    string reverseWords(string s) {
        string word="";
        string ans="";
        for(auto &i:s)
        {
            if(i!=' ')
                word.push_back(i);
            else 
            {
                reverse(word.begin(), word.end());
                ans.append(word);
                word="";
                ans.push_back(' ');
            }
        }
        reverse(word.begin(), word.end());
        ans.append(word);
        return ans;
    }*/
    /*M-I
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
    }*/
};