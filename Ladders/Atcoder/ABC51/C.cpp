#include <bits/stdc++.h>
using namespace std;

// Macros
#define F first
#define S second
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long int

// Aliases
using ull = unsigned int;
using ld = long double;

// Constants
constexpr int INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr int MOD = 1e9 + 7;

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){
    for (auto &it : v)
        cin >> it;
    return istream;
}

template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args){
    cout << t << " ";
    print(forward<Args>(args)...);
}

template <typename T>
int32_t size_i(T &container) { return static_cast<int32_t>(container.size()); }

// Mathematical functions
int GCD(int a, int b){
    while (b)
    {
    a %= b;
        swap(a, b);
    }
    return a;
}

int GCD_extended(int a, int b, int &x, int &y){
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){
    int q = a1 / b1;
    tie(x, x1) = make_tuple(x1, x - q * x1);
    tie(y, y1) = make_tuple(y1, y - q * y1);
    tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
int LCM(int a, int b){
    return ((int)a * b) / GCD(a, b);
}

int modpow(int x, int n, int m = MOD){
    if (x == 0 && n == 0) return 0; // undefined case
    int res = 1;
    while (n > 0) 
    {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}

int modinv(int x, int m = MOD){
    return modpow(x, m - 2, m);
}


void solve(int tc){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string fu,fs,su,sd;
    fu = fs = su = sd = "";
    su += "LU";
    sd += "RD";
    int x = c - a;
    int y = d - b;
    while(y--){
        fu += 'U';
        su += 'U';
        fs += 'D';
        sd += 'D';
    }
    su += "R";
    sd += "L";
    while(x--){
        fu += 'R';
        su += 'R';
        fs += 'L';
        sd += 'L';
    }
    su += "D";
    sd += "U";
    print(fu+fs+su+sd);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;

    int tests = 1;
    // cin>>tests;
    for (int tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}