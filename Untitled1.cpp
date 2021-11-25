#include <bits/stdc++.h>
using namespace std;
void nhap(long a[], long N, long L){
    for (long i = L; i < N+L-1; i++) {
        cin>>a[i];
    }
}
void sapxep(long a[], long N, long L){
    long tg;
    for (long i = L; i <= N+L-2; i++) {
        for (long j = i+1; j <= N+L-1 ; ++j) {
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void  in(long a[], long N, long L){
    for (long i = L; i <=N+L-1; i++) {
        if(a[i]!=i){
            cout<<i<<endl;
            break;
        }
    }
}
int main() {
    long a[100],N,L;
    int test;
    cin>>test;
    while (test--){
        cin>>N>>L;
        nhap(a,N,L);
        sapxep(a,N,L);
        in(a,N,L);
    }

    return 0;
}
