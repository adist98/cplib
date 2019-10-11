// code used to calculate power of 2 in log time
// Code calculates the power of any number in log time.
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
