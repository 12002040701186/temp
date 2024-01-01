#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  dd double
#define endl '\n'
#define p pair<ll,ll>
#define f first
#define s second
#define  dd double
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<=b;i++)
 
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
//void update(ll *bit,ll size,ll index,ll v)  // point update 
//{
//    for(;index<=size;index+=(index&(-index)))
//       bit[index]+=v;
//    
//}
//ll range(ll *bit,ll index) // 1...index range
//{
//    ll count=0;
//    for(;index>0;index-=(index&(-index)))
//       count+=bit[index];
//   return count;
//}
// 
// 
// 
ll mod=1e9+7;
ll mul(ll a, ll b) { 
    return ((a % mod) * (b % mod)) % mod; 
} 
ll add(ll a, ll b) { 
    return  ((a % mod) +  (b % mod) + mod ) % mod; 
} 

//ll ceil_1(double num) {
//    ll inum = num;
//    if (num == (double)inum) {
//        return inum;
//    }
//    return inum + 1;
//}
// ll power(ll x,ll y)
// {
    
//     if(y==0)
//         return 1;
//     ll a=power(x,y/2);
//     ll b;
//      b=(a*a)%mod;
//     if(y%2==0)
//      return b;
//     else
//     b=(b*x)%mod;
//     return b;
// }
////ll mod_inverse(ll a)
////{
////	return power(a,mod-2)%mod;
////}
// ll dp[(ll)(5e5)+8];
// ll fact()
// {
// 	ll c=1;
// 	dp[0]=1;
// 	for(ll i=1;i<5e5+8;i++)
// 	{
// 	  c=(dp[i-1]*i)%mod;
// 	  dp[i]=c;
// 	}
// 	return c;
// }
//bool fun(ll c,ll s1, ll s2,ll n, ll m,ll k)
//{
//
//	if(n<m)
//	{
//	s1+=min((m-n),c)*k;
//	  n+=min((m-n),c);
//	  c-=m-n;
//	}
//	else
//	{
//		s2+=min((n-m),c);
//		m+=min((n-m),c);
//		c-=n-m;
//	}
//  if(c>0)
//  {
//  	s1+= ceil(c/2.0)*k;
//  	n+=ceil(c/2.0);
//  	s2+=c/2;
//  	m+=c/2;
//  }
//	if((double)s1/n>(double)s2/m)
//	return 1;
//	else
//	return 0;
//}
//void b_search(ll s1, ll s2,ll n, ll m, ll k)
//{
//	ll l=0,hi=1e17;
//	
//	ll ans=1e18;
//		while(l<=hi)
//	{
//		ll mid=(l+hi)/2;
//		if(!fun(mid,s1,s2,n ,m, k))
//		{
//          
//		  l=mid+1;			
//		}
//		else
//		{
//			ans=min(ans,mid);
//			hi=mid-1;
//		}
//	}
//	
//   cout<<ans;
//	cout<<endl;
//}
//unordered_set<ll> s1;
//bool flag=0;
// void merge(vector<int>& arr, int left, int mid, int right, vector<int>& temp) {
//    int i = left, j = mid, k = left;
//    long long inv_count = 0;
//bool b1=0;
//    while ((i <= mid - 1) && (j <= right)) {
//        if (arr[i] <= arr[j]) {
//           
//            temp[k++] = arr[i++];
//        } else {
//        	
//           if(abs(arr[mid-1]-arr[j])>1)
//           flag=1;
//            temp[k++] = arr[j++];
//           
//            
//          
//        }
//    }
//
//    while (i <= mid - 1) {
//    	if(b1)
//    	s1.insert(arr[i]);
//        temp[k++] = arr[i++];
//    }
//
//    while (j <= right) {
//        temp[k++] = arr[j++];
//    }
//
//    for (i = left; i <= right; i++) {
//        arr[i] = temp[i];
//    }
//
//
//}
//
//void mergeSort(vector<int>& arr, int left, int right, vector<int>& temp) {
//    long long inv_count = 0;
//
//    if (right > left) {
//        int mid = (left + right) / 2;
//
//         mergeSort(arr, left, mid, temp);
//       mergeSort(arr, mid + 1, right, temp);
//        merge(arr, left, mid + 1, right, temp);
//    }
//
//   
//}
//bool checkPalindrome(int n)
//{
//    int reverse = 0;
//    int temp = n;
//    while (temp != 0) {
//        reverse = (reverse * 10) + (temp % 10);
//        temp = temp / 10;
//    }
//    return (reverse
//            == n); // if it is true then it will return 1;
//                   // else if false it will return 0;
//}
//int decimalToBinary(int N)
//{
//    // To store the binary number
//    ll B_Number = 0;
//    int cnt = 0;
//    while (N != 0) {
//        int rem = N % 2;
//        ll c = pow(10, cnt);
//        B_Number += rem * c;
//        N /= 2;
//        // Count used to store exponent value
//        cnt++;
//    }
//    return B_Number;

ll solve()
{
ll mn=1e5,mx=0,c=1,c1=0,n,k,m;
cin>>n;
string s;
cin >> s;
vll v(26,-1),dp(n+1,0);
dp[0] = 1;

fo(i,1,n-1)
{

    dp[i] += 2 * dp[i - 1] + 1 ;
    if(v[s[i]-'a']!=-1)
        dp[i] -= dp[v[s[i] - 'a']];
}

cout << dp[n];
// cout<<endl;

return 0;  
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
 cin>>t;
//	 fact();
	while(t--)
	{
	solve();
    }
	
}
