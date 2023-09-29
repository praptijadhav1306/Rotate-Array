#include <bits/stdc++.h>
using namespace std;
void rotatearray(vector<int>&nums, int low, int high){
    while(low<high){
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = (int)v.size();
    int k = 3;

    cout<<"\nArray Before Rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    rotatearray(v, 0, n-k-1);
    rotatearray(v, n-k, n-1);
    rotatearray(v, 0, n-1);

    cout << "Array After Rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout <<"\n";

    return 0;
}