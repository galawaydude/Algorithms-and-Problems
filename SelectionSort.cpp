#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int> &ar)
{
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = i+1; j < ar.size(); j++)
        {
            if (ar[i]>ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
}
int main()
{
    vector<int> ar;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        ar.push_back(a);
    }
    cout<<endl;
    SelectionSort(ar);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
}