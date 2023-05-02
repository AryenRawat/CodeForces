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

typedef long long ll;

// 3141592653589793238462643383279502884197169399375105820974944  value of pi

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
bool isPrime(int n)
{
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

/* Function to check whether the string is palindrome
bool isPalindrome(string S){
    string P = S;

    reverse(P.begin(), P.end());

    if (S == P) {

        return 1;
    }
    // Otherwise
    else {

        return "0;
    }
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

void sol(){
    // Solve here
    ll n1,n2;cin>>n1>>n2;
    ll k,m;cin>>k>>m;
    vector<ll>v1(n1),v2(n2);
    for(auto &i:v1) cin>>i;
    for(auto &i:v2) cin>>i;
    int x=v1[k-1];
    int y=v2[n2-m];
    if(x<y) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    //Code goes here
    FAST 
    ll t;
    t=1;
    while(t--){
        sol();
    }
    return 0;
}
 
