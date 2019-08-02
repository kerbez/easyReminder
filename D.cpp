#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pb push_back
#define fo(i, n) for(ll i = 1; i <= n; ++i)
typedef pair<ll, ll> pii;

const ll N = 501000;
const ll mod = 1e9 + 7;
const double eps = 1e-9;

int n;
string s,pr,nx;
set ss<string>;
int main(){
	freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin>>n;
    set<String>::iterator it;
    fo(i, n){
    	cin>>s;
    	if(ss.find(s) != ss.end()){
    		it = ss.find(s);
    		pr = *prev(it);
    		nt =  it++;
    		cout<<pr<<" "<<nx<<endl;

    	}
    	else{
    		ss.insert(s);
    	}
    }
}