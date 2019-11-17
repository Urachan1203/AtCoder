//nCr.mod(10e9+7)の値を返す
//todo:動作テスト
#include <iostream>
using namespace std;


//fac[],inv[],finv[]はグローバルにおいとく
//*************************************
long long finv[510000], inv[510000],fac[510000];

// テーブルを作る前処理
void COMinit() {
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for (int i = 2; i < 510000; i++) {
                fac[i] = fac[i - 1] * i % 1000000007;
                inv[i] = 1000000007 - inv[1000000007%i] * (1000000007 / i) % 1000000007;
                finv[i] = finv[i - 1] * inv[i] % 1000000007;
        }
}

// 二項係数計算
long long COM(int n, int k){
        COMinit();
        if (n < k) return 0;
        if (n < 0 || k < 0) return 0;
        return fac[n] * (finv[k] * finv[n - k] % 1000000007) % 1000000007;
}

//*****************************************
