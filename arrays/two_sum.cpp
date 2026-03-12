#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n,target;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++)
        cin>>nums[i];

    cin>>target;

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        int needed = target - nums[i];

        if(mp.count(needed))
        {
            cout<<mp[needed]<<" "<<i;
            break;
        }

        mp[nums[i]] = i;
    }

    return 0;
}