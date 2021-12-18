#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,key,flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        int l_b=0,u_b=n-1,c=0;
        while(u_b >=l_b)
        {
            int mid=(u_b+l_b)/2;
            if(key == a[mid])
            {
                c++;
                cout<<"Present"<<" "<<c<<endl;
                flag=1;

                break;
            }
            else if(key<a[mid])
            {
                u_b=mid-1;
                c++;
            }
            else if(key>a[mid])
            {
                l_b=mid+1;
                c++;
            }

        }
        if(flag==0)
        cout<<"not present"<<" "<<c++<<endl;

    }
    
    return 0;
}
