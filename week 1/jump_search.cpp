#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        int key;
        cin>>key;
        int start=0;
        c++;
        if(key==a[start])
        {
            cout<<"present"<<c<<endl;
            flag=1;

        }

        int end=2;
        c++;
        while(a[end]<=key && end<n)
        {
            start=end;
            end+=2;
            
            c++;
        }
        if(end>=n)
        end=n-1;

        if(flag==0)
        {
            for(int i=start;i<=end;i++)
            {
                c++;
                if(key==a[i])
                {
            
                cout<<"present"<<" "<<c<<endl;
                flag=1;
                break;
                }
            }
        }
        if(flag==0)
        cout<<"not present"<<" "<<c<<endl;    

    }
    return 0;
}
