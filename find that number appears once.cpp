class solution
{
  public:
  int getsingleelement(vector<int> &arr)
  {
    int xor=0;
    for(int i=0;i<arr.size();i++)
    {
        xor=xor^arr[i];
    }
    return xor;
 }
};