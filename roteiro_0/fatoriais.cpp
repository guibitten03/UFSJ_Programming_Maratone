#include <bits/stdc++.h>

using namespace std;

long long int fact(long long int x){
    long long int result = 1;

    for(int i = 2; i <= x; i++){
        result *= i;
    }
    
    return result;
}

int main(){

    while(1){
        long long int m, n, result = 0;

        cin >> m >> n;

        if(m == 0){
            result += 1;
        }else{
            result += fact(m);
        }

        if(n == 0){
            result += 1;
        }else{
            result += fact(n);
        }

        cout << result << '\n';
    }

    return 0;
}