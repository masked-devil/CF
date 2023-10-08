#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  int long long  x;
  int long long a,b,count=0;
  cin>>a>>b>>n;
  vector<long long int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  auto it=v.begin();
  for(;b!=0;b--){
    if(b==1 && it!=v.end()){
        b=min(a,b+*(it));it++;
    }
    
    
    count++;
  }
  cout<<count<<"\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
      solve();
    }

    return 0;
}