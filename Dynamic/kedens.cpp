#include <iostream>
#include <vector>
using namespace std;
int maxsubarry(vector<int>&a)
{
    int cs=0, maxsum=a[0];
    for(int val:a)
    {
        cs=cs+val;
        maxsum=max(cs,maxsum);
        if(cs<0)
        {cs=0;}
    }
    return maxsum;
}

int main()
{
  vector<int>a={22,-22,21};
 cout<< maxsubarry(a);

}