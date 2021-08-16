#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int partioning(int a[], int l, int h)
{

    // cout<<"l"<<l<<"h"<<h;
    int pivot = a[l];
    int i = l;
    int j = h;

    do
    {

        do
        {
            ++i;
        } while (a[i] <= pivot);
        do
        {
            --j;
        } while (a[j] > pivot);

        if (i < j)
            swap(a[i], a[j]);

    } while (i < j);
    // cout<<j<<" "<<a[j]<<"pivot ::"<<pivot<<endl;
    swap(a[j], a[l]);
    //cout<<j<<" ";
    return j;
}
void Quick_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = partioning(a, l, h);
        //cout<<j;
        Quick_sort(a, l, j);
        Quick_sort(a, j + 1, h);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        n=n+1;
        int *a = new int[n];
        for (int i = 0; i < n-1; i++)
            cin >> a[i];

        a[n-1] = INT32_MAX;
        Quick_sort(a, 0, n-1);


        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] == a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}