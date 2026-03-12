#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int count=0;
int candidate=0;
for(int i=0;i<n;i++)
{
    if(count==0)
    {
        candidate=arr[i];
    }
    if(arr[i]==candidate)
    {
        count++;
    }
    else
    {
        count--;
    }
}
cout<<candidate;
return 0;
}