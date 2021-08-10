#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int t;
    cin>>t;
    while (t--)
    {
    
    int n;
    cin >> n;
    int * arr = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int C_comp = 0, C_shift = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key)
            {

                arr[j + 1] = arr[j];
                j--;
                ++C_comp;
                ++C_shift;
            }

            arr[j + 1] = key;
            ++C_shift;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout <<endl<< " NO. of comparisions :: " << C_comp << endl;
    cout << " No. of shifts :: " << C_shift << endl;
    }
    return 0;

}