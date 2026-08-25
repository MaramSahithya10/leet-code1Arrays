class solution
{
  public:
  int getsingleelement(vector<int> &arr)
  {
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<arr.size();i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;
 }
};