#define ll long long int
#define MOD 100000007
class Solution {
public:
    ll hashValue(string string , ll radix , ll m){
        ll factor = 1 , ans = 0 ;
        for(ll i = m-1 ; i>=0 ; i--){
            ans+= ((string[i]-'a') * factor) % MOD ;
            factor = (radix * factor) % MOD ; 
        }
        return ans % MOD ;
    }

    int strStr(string haystack, string needle) {
        ll n = haystack.size() , m = needle.size();
        if(n<m) return -1 ;
        
        ll radix = 26 , maxWeight = 1 ;
        for(int i=0 ; i<m ; i++){
            maxWeight = (maxWeight * radix) % MOD ;
        }

        ll hashNeedle = hashValue(needle , radix , m ) , hashHay = 0 ;

        for(ll i=0 ; i<= n-m ; i++){
            if(i==0){
                hashHay = hashValue(haystack , radix , m);
            }
            else{
                hashHay = ((hashHay * radix)%MOD - ((haystack[i-1]-'a') * maxWeight)%MOD +
                (haystack[i+m-1]-'a') + MOD) % MOD ;
            }
            if(hashHay == hashNeedle){
                for(ll j=0 ; j<m ; j++){
                    if(needle[j] != haystack[j+i]) break ;
                    if(j == m-1) return i ;
                }
            }
        }
        return -1 ;
    }
};