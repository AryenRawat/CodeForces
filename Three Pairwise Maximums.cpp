/*  :) USE DARK MODE CAUSE LIGHT ATTRACTS BUGS :)  */
/*  while(alive){ eat(); //sleep();  code();  }    */
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define endl "\n"
#define all(v) v.begin(), v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl

typedef long long ll;
typedef unsigned long long ull;
const int MAX = 1e5+7;

// 3.141592653589793238462643383279502884197169399375105820974944  value of pi

/*op stuff
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    FAST
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
*/

/*bool hasAlternatingBits( int n ) {
        long x = ( n^( n >> 1) );
        return !( x & ( x+1 ) );
}*/

/*int maxSubsetXOR(int arr[], int N)
    {
        //Your code here
        if(N==0) return 0;
        int x=0;
        while(1){
            int y=*max_element(arr,arr+N);
            if(y==0) return x;
            x=max(x,x^y);
            for(int i=0;i<N;i++){
                arr[i]=min(arr[i],arr[i]^y);
            }
        }
    }
*/

/*Kadane Algorithm for max subarray
int maxSubArraySum(int a[], int size){
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}*/

/*Check if num is prime or not
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i<= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}*/

/*PrimeFactors of a number(factors are pushed into a vector)
void primeFactors(int n,vector<int>&ans){
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        ans.push_back(c);
        n/=c;
        }
        else c++;
    }
}
*/

/*reverse a number
int reverseDigits(int num){
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
*/

/*  palindrome
bool isPalindrome(string S){
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return 1;
    }
    return 0;
}
*/

/*factorial
ll fact(ll n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
*/

/*To count no of times substring occurs in a string 
int frequency_Substr(string str,string substr){
    int count=0;
    for (int i = 0; i <str.size()-1; i++)
    {
        int m = 0;
        int n = i;
        for (int j = 0; j < substr.size(); j++)
        {
            if (str[n] == substr[j])
            {
                m++;
            }
            n++;
        }
        if (m == substr.size())
        {
            count++;
        }
    }
    return count;
}
*/

/* Regular brackets
bool ispar(string x)
    {
        // Your code here
        stack<int>st;
        for(auto i:x){
            if(i=='(' || i=='[' || i=='{'){
                st.push(i);
            }else{
                if(st.empty() || st.top()=='(' && i!=')' || st.top()=='[' && i!=']' || st.top()=='{' && i!='}'){
                    return 0;
                }
                st.pop();
            }
        }
        return st.empty();
}
*/

/*Prefix vector/array basic..
void fillPrefixSum(vector<ll>&v, ll n, vector<ll>&prefixSum)
{
    prefixSum[0] = v[0];
    for (ll i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + v[i];
}
*/

/* longest equal subarry in an array
int ans=1,temp=1;
   for(int i=1;i<2*n;i++){
   	if(v[i]==v[i-1]){
   		temp++;
	}
     else {
   	    ans=max(ans,temp);
   	    temp=1;
     }
   }   
   ans=max(ans,temp);
   cout<<ans<<endl;   */

/*comparator something...
bool cmp(pair<int,int> &a,  pair<int,int> &b){
    return a.first < b.first;
}*/

/*lcs
ll lcs(string text1, string text2) {
        ll x=text1.length();
        ll y=text2.length();

        ll dp[x+1][y+1];

        for(ll i=0;i<=x;i++) dp[i][0]=0;
        for(ll j=0;j<=y;j++) dp[0][j]=0;

        for(ll i=1;i<=x;i++){
            for(ll j=1;j<=y;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
}
*/

/*Subsequence..
bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return i == n;
}*/

void sol(){
    // Solve here
    vector<ll>v(3);
    for(auto &it:v) cin>>it;
    sort(all(v));
    if(v[1]!=v[2]) {cout<<"NO\n";return;}
    cout<<"YES\n";
    cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
}

int main(){
    //Code goes here
    FAST 
    ll t=1;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}
