#include<bits/stdc++.h>
#define int long long//__int128
#define mmst0(x) memset(x,0,sizeof(x))
#define mmst3f(x) memset(x,0x3f,sizeof(x))
#define pb(x) emplace_back(x)
#define mkp(x, y) make_pair(x, y)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef long double rld;
typedef unsigned long long ull;

const rld eps = 1e-6;
const int INF=0x3f3f3f3f;//0x3f3f3f3f3f3f3f3f;//LLINF
const int N=(int)2e5+3;

int read(){int s=0,w=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')w=-1;ch=getchar();}while(isdigit(ch)){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();} return s*w;}
//void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

int n;
int a[N],b[N],ans[N],sum[N];
vector<int> v[N];

void work()
{
    n=read();
    for(int i=1;i<=n;i++) v[i].clear();
    mmst0(ans);
    for(int i=1;i<=n;i++) a[i]=read();
    for(int i=1;i<=n;i++) b[i]=read();
    for(int i=1;i<=n;i++) v[a[i]].pb(b[i]);
    for(int i=1;i<=n;i++)
    {
        sort(v[i].rbegin(),v[i].rend());
        int sz=(int)v[i].size();
        for(int j=1;j<=sz;j++) sum[j]=sum[j-1]+v[i][j-1];
        //for(int j=1;j<=sz;j++) ans[j]+=sum[sz-(sz%j)];
        for(int j=1;j<=sz;j++) ans[j]+=sum[sz/j*j];
    }
    for(int i=1;i<=n;i++) printf("%lld%c",ans[i]," \n"[i==n]);
    return;
}

signed main()
{
    //ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); //freopen(".in", "r", stdin);//freopen(".out", "w", stdout);
    signed T=(int)read();
    for(signed Case=1; Case<=T; Case++)
    {
        //printf("Case %d: ",Case);
        work();
    }
    return 0;
}

