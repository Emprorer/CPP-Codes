#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define lli long long int
#define llu long long unsigned int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FOR(i,s,e) for(i=s; i<e; i++)
#define mod 998244353
#define F first
#define S second
#define plli pair<lli,lli>
#define pqlli priority_queue<lli>
#define test(t) cin>>t; while(t--)
using namespace std;
 
lli power(lli a, lli b, lli m = mod)
{
	lli result = 1;
    for (;;)
    {
        if (b & 1)
            result = (result*a)%m;
        b = (b>>1)%m;
        if (!b)
            break;
        a = (a*a)%m;
    }
    return result%m;
}
 
bool isPrime(lli n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (lli i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int main()
{
	
}
