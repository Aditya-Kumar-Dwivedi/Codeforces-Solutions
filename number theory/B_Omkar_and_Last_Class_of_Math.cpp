#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int         long long
#define mod         1000000007
#define FAST        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f(i,n)      for(int i=0;i<n;i++)
#define fp(i,k,n)   for(int i=k;i<=n;i++)
#define fr(i,k,n)   for(int i=k;i>=n;i--)
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define dbg(x)      cout << (#x) << " is " << (x) << '\n' 
#define F           first
#define S           second
#define sz(x)       (int)(x).size()
#define lb          lower_bound
#define ub          upper_bound
#define mems(x)     memset(x,0,sizeof(x))
#define all(a)      a.begin(),a.end()
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
/*---------------------------------------------------------------------------------------------------*/

void solve()
{
  int n;
  cin >> n;
  int val=(n+1)/2,ans=(int)2e18,res=0;
  fp(i,1,sqrt(n))
  {
      if(n%i==0)
      {
         int x=(i*(n-i)/__gcd(i,n-i));
    //   dbg(i);
    //   dbg(x);
            if(x<ans)
            {
                res=i;
                ans=x;
            } 
     if(i>1)
      x=((n/i)*(n-(n/i))/__gcd(n/i,n-(n/i)));
    //   dbg(i);
    //   dbg(x);
      if(x<ans)
      {
          res=n/i;
          ans=x;
      }
      }
  }
//   fp(i,max(val-1000,1ll),min(n-1,val+1000))
//   {
//       int x=(i*(n-i)/__gcd(i,n-i));
//     //   dbg(i);
//     //   dbg(x);
//       if(x<ans)
//       {
//           res=i;
//           ans=x;
//       }
//   }
//   dbg(ans);
//   fp(i,1,n-1)
//   {
//        int x=(i*(n-i)/__gcd(i,n-i));
//     //   dbg(i);
//     //   dbg(x);
//       if(x<ans)
//       {
//           res=i;
//           ans=x;
//       }
//   }
//   dbg(ans);
  cout << res << " " << n-res << '\n';
  return;
} 

signed main()
{
  FAST
  int T=1;
  cin >> T;
  while(T--)
  {
    solve();
  }
  return 0;
}
