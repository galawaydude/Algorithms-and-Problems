#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &ar, int s, int e)
{
    int pivot_index = s+(e-s)/2;
    int pivot_element = ar[pivot_index];
    while (s < pivot_index && e > pivot_index)
    {
        while (ar[s]<pivot_element)
        {
            s++;
        }
        while (ar[e]>pivot_element)
        {
            e--;
        }
        if ((ar[s]>pivot_element) && (ar[e]<pivot_element))
        {
            swap(ar[s],ar[e]);
        }
    }
    return pivot_index;
}
void QuickSort(vector<int> &ar, int s, int e)
{
    if (s>=e)
    {
        return ;
    }
    int p = partition(ar, s, e);
    QuickSort(ar, s, p-1);
    QuickSort(ar, p+1, e);
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
    QuickSort(ar, 0, (ar.size()-1));
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
}