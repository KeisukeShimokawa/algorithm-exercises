# 文字列のリストとして受け取りので、高階関数mapでint関数を各要素に適用
N, K = map(int, input().split())
# 入力される文字列を、文字のリストに変換する
S = list(input())

S[K - 1] = S[K - 1].lower()

print(''.json(S))
