#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,diff=0,count=0;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int key;
        cin>>key;


        for (int i = 0; i <=n-2; i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                if(abs(a[i]-a[j])==key)
                {count++;}
            }
        }
        cout<<count;
        
    }
    return 0;
    
}
