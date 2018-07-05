#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define MOD 1000000007
#define pb push_back
#define pf printf
#define sf scanf
#define all(v) v.begin(), v.end()
#define rep(i, s, e) for(auto i=s; i<=e; i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define oo 987654321
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};
inline void prep()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
}
int n;
int ht[100],span[100];
stack<int> st;
int main()
{
	prep();
  cin>>n;
  loop(i,n) cin>>ht[i];
  st.push(0);
  span[0]=1;
  for(int i=1;i<n;i++)
  {
    while(!st.empty()&&ht[st.top()]<=ht[i]) st.pop();
    span[i]=i-st.top();
    st.push(i);
  }
  loop(i,n) cout<<span[i]<<" "; cout<<"\n";
  return 0;
}
