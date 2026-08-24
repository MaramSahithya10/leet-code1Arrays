class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) 
    {
        int i = 0;
        int j = 0;
        int count = 0;
        int ans = 0;

        while(i < a.size() && j < b.size())
        {
            if(a[i] <= b[j])
            {
                ans = a[i];
                i++;
            }
            else
            {
                ans = b[j];
                j++;
            }

            count++;

            if(count == k)
            {
                return ans;
            }
        }
        while(i < a.size())
        {
            ans = a[i];
            i++;
            count++;

            if(count == k)
            {
                return ans;
            }
        }

        while(j < b.size())
        {
            ans = b[j];
            j++;
            count++;

            if(count == k)
            {
                return ans;
            }
        }

        return -1;
    }
};