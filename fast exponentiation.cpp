// code used to calculate power of 2 in log time
// Code calculates the power of any number in log time.
// calculates (a^b)
typedef long long int ll;

int mod = 1000000007;

ll powe(ll a,ll b){
	ll ans=1;
	while(b){
		if(b%2){
			ans*=a;
			ans%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return ans;
}
