class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string firstStr=strs[0];
        string lastStrs=strs[n-1];
        string output="";
        for(int i=0;i<min(firstStr.length(),lastStrs.length());i++)
        {
        if(firstStr[i]==lastStrs[i])
        {
            output+=firstStr[i];
        }
        else
            break;
        }
       return output;
    }
};