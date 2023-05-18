#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) ((v).begin()), ((v).end())
#define foi(n) for (long long i=0; i<n; ++i)
#define foj(n) for (long long j=0; j<n; ++j)
#define rev(a) reverse(a.begin(), a.end());
#define sz(x) x.size()
#define v(s) vector<int> s
 
int convert( string s) {
   int x;
   x = stoi( s );
   return x;
}

int encry(char arr[],char c){
    ll idx;
    foi(26){
           if(arr[i]==c){
               idx=i;
               break;
           }
       }
       return idx;
}
 

void solve(){
   string input; cin>>input;
   string encrypt, decrypt=""; ll count=0, ans, key=11;
   char letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   foi(sz(input)){
       encrypt=encrypt+to_string(encry(letters,input[i]))+'.';
   }
   cout<<"The encrypted message value is: "<<encrypt<<endl;
   ll j=0;
   foi(sz(encrypt)){
       if(encrypt[i]=='.'){
           string sub =encrypt.substr(j,i);
           j=i+1;
           cout<<sub<<endl;
           ll x=convert(sub);
           ans=(x+key)%26;
           decrypt.push_back(letters[ans]);
       }else{
           ++count;
       }
       
   }
   cout<<"The ciphertext message is: "<<decrypt<<endl;
   
}

 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t; cin>>t;
    //ll t=1;
    while(t--){
        solve();
    }
    #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif
    
 
 
}