#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool sorted = true;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < v[i-1])
        {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}