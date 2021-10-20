#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,num_of_peak,most_peak=0,left=0;
        cin>>n>>k;
        vector<int>v;
        bool peak_pos[n]; /// mountains peak position container. if 0, not peak, else peak
        int con_sum[n]; ///consecutive sum container
        memset(peak_pos,0,sizeof(peak_pos)); /// set all value 0. prothome sobgula not peak dhore nilam

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.pb(a);
            //cout<<v[i]<<" ";
        }

        for(int i=1; i<n-1; i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
                peak_pos[i]=1;  /// jegula peak segula 1 kore dilam

        }



        con_sum[0]=0; /// prothom ta kokhono peak hote parbe na, er age kono
                      /// element o nai. tai 1st er ta all time 0 (zero) hobe

        for(int i=1; i<n; i++)
        {
            con_sum[i]=con_sum[i-1]+peak_pos[i]; /// consecutive sum ber korlam

        }


        for(int i=0; i<=n-k; i++)
        {
            num_of_peak =con_sum[i+k-1]-con_sum[i]; /// i theke i+k-1 er moddhe koyta peak ace ta ber korlam
                                                   ///  total k ta element er moddhe
            //cout<<l<<" ";
            if(peak_pos[i+k-1])
                num_of_peak--; /// jodi i+k-1 tomo i.e. last er value peak thake tahle
                               /// eta count korbo na. karon last er value peak hote
                               /// parbe na. see problem statement

            if(peak_pos[i])
                num_of_peak--; /// 1st er khetro same condition

            if(most_peak<num_of_peak) /// jodi ager theke ei segment a peak besi hoy
                                     ///  tahle eta best a rakbo
            {
                most_peak=num_of_peak;  /// best a raklam
                left=i; /// je segment a besi peak tar starting index left a raklam

            }
            //cout<<b<<" "<<left<<"\n";


        }
        cout<<most_peak+1<<" "<<left+1<<"\n"; /// jodi peak thake p ta tahle dorja part hobe p+1 ta and
                                              /// ekhane 0 index dhore kora. tai left er sathe 1 jog korci

    }
}
