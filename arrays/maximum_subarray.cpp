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
    int max_sum=0;
    int current_sum=arr[0];
    for(int i=0;i<n;i++)
    {
           current_sum=current_sum+arr[i];
           max_sum=max(max_sum,current_sum);
           if(current_sum<0)
           {
            current_sum=0;
           }
    }
    cout<<max_sum;
    return 0;
}