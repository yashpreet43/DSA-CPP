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
    int min_price=arr[0];
    int max_profit=0;
   for(int i=1;i<n;i++)
   {
    int profit=arr[i]-min_price;
    if(profit>max_profit)
    {
        max_profit=profit;
    }
    if(arr[i]<min_price)
    {
        min_price=arr[i];
    }
   }
   cout<<max_profit;
   return 0;
}