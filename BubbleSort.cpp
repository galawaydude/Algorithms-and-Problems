#include<iostream>
using namespace std;
#include<vector>
void BubbleSort(vector<int> &ar)
{
    for (int i = 0; i < (ar.size()-1); i++)
    {
        for (int j = 0; j < (ar.size()-i-1); j++)
        {
            if (ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
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
    BubbleSort(ar);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
}