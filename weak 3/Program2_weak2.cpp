#include<iostream>
//#include<algorithm>
using namespace std;
int binary_search(int a[],int L_b, int n,int key)
{
    int U_b=n-1;
    while(U_b>=L_b)
    {
        int mid=(U_b+L_b)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            U_b=mid-1;
        }
        else{
            L_b=mid+1;
        }

    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<=n-3;i++)
        {
            //cout<<"hi";
            for(int j=i+1;j<n;j++)
            {
                int sum=0;
               // cout<<"in";
                sum=a[i]+a[j];
                //cout<<sum;
                if(sum>a[n-1])
                    break;
                int k=binary_search(a,j+1,n,sum); 
                if(k!=-1)
                {cout<<i+1<<" "<<j+1<<" "<<k+1 <<endl;return 0;}

            }
        }
        cout<<" NOT Present"<<endl;

    }
    
return 0;
}