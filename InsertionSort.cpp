#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &ar)
{
    for (int i = 1; i < ar.size(); i++)
    {
        int key = ar[i];
        int j = i-1;
        while (j >= 0 && ar[j]>key)
        {
             ar[j+1] = ar[j];
              j--;
        }
        ar[j+1] = key;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int a ;
        cin>>a;
        ar.push_back(a);
    }
    insertionSort(ar);
    for(auto i: ar)
    {
        cout<<i<<" ";
    }
}