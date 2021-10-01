#include<iostream>
using namespace std;

void insertionSort(int *a,int N)
{
    for(int i = 1; i < N; i++)
    {
        int curr = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > curr)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;
    }
    
}

int main()
{
    int N;
    cin >> N;

    int a[N];
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    insertionSort(a, N);
    
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
} 