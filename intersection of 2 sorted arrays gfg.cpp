class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) 
    {
      vector <int> ans;
      int i=0;
      int j=0;
      int m=arr2.size();
      int n=arr1.size();
      while(i<n && j<m)
      {
          if(arr1[i]<arr2[j])
          {
              i++;
          }
          else if(arr2[j]<arr1[i])
          {
              j++;
          }
          else
          {
              if (ans.empty() || ans.back() != arr1[i])
              ans.push_back(arr1[i]);
              i++;
              j++;
          }
      }
      return ans;
    }
};