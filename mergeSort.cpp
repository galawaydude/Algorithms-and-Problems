#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& vec, int s, int m, int e)
{
    int i = s, j = m + 1;
    vector<int> temp;
    
    while (i <= m && j <= e)
    {
        if (vec[i] <= vec[j])
        {
            temp.push_back(vec[i]);
            i++;
        }
        else
        {
            temp.push_back(vec[j]);
            j++;
        }
    }
    
    while (i <= m)
    {
        temp.push_back(vec[i]);
        i++;
    }
    
    while (j <= e)
    {
        temp.push_back(vec[j]);
        j++;
    }
    
    for (int k = s; k <= e; k++)
    {
        vec[k] = temp[k - s];
    }
}

void mergeSort(vector<int>& vec, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    
    int mid = s + (e - s) / 2;
    
    mergeSort(vec, s, mid);
    mergeSort(vec, mid + 1, e);
    merge(vec, s, mid, e);
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    mergeSort(vec, 0, n - 1);
    
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    
    return 0;
}
