#include<iostream>
using namespace std;

int main(){

    long t; 
    cin>>t;
    // scanf("%ld", &t);
    while(t--){
        long a, b, c; 
        cin>>a>>b>>c;
        // scanf("%ld %ld %ld", &a, &b, &c);
        long m = (a + b + c + 2) / 3;
        long ans = m;
        if(a >= b || c >= b){
            if(a < c){long tmp = c; c = a; a = tmp;}
            if(c < m){b -= (m - c); b = (b > 0) ? b : 0;}
            m = (m > c) ? m : c;
            long x = (a + b + 1) / 2;
            ans = (m > x) ? m : x;
        }

        cout<<ans<<endl;
    }

    return 0;
}