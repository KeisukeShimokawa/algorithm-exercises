#include <iostream>

using namespace std;

// 並び替える対象の配列を、空白区切りで出力する関数
void print_table(int A[], int n){
  for(int i=0; i<n; i++) {
    // 最初だけは先頭に空白を付けない
    if(i) cout<<' ';
    cout << A[i];
  }
  cout << endl;
}
 
int main(){

  int n, v, j;
  int A[100];
 
  // 数列の長さNと空白区切りのN個の整数を受取る
  cin >> n;
  for (int i=0; i<n; i++) cin >> A[i];
  
  // 初期状態の配列を出力する
  print_table(A, n);
  // 左をソート済み、右を未ソートの状態として計算をすすめる
  for(int i=1; i<n; i++) {
    // 未ソート配列の先頭を取得する
    v = A[i];
    // ソート済み配列の最後尾から計算を進めていく
    j = i - 1;
    // ソート済み配列の先頭に到達していない、かつ、
    // 対象の整数よりも大きな値の場合、順序を入れ替える
    while(j >= 0 && A[j] > v) {
      // 比較対象の整数を1つ前に進める
      A[j + 1] = A[j];
      // 対象を左にずらしていく
      j--;
    }
    // 元のA[j]の位置に対象の整数を導入する。
    A[j + 1] = v;
    print_table(A, n);
  }
  return 0;
}
