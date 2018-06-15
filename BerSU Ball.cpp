
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    lli n,m,i,j,a,l=0,r=0,count=0;
    vector<lli>v;
    vector<lli>w;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        w.push_back(a);
    }
    sort(w.begin(),w.end());
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(v[i]==w[j] &&  v[i]!='\0' && w[j]!='\0')
            {  /// cout<<v[i]<<" "<<w[j]<<endl;
                count++;
                v[i]='\0';
                w[j]='\0';
                break;
            }
            else if(v[i]==w[j]+1 && v[i]!='\0' && w[j]!='\0')
            { /// cout<<v[i]<<" "<<w[j]<<endl;
                count++;
                v[i]='\0';
                w[j]='\0';
                break;
            }
           else if(v[i]==w[j]-1 && v[i]!='\0' &&  w[j]!='\0')
            {
                /// cout<<v[i]<<" "<<w[j]<<endl;
                count++;
                v[i]='\0';
                w[j]='\0';
                break;
            }
        }
    }
        cout<<count;



}
