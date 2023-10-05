s, k = map(int, input().split())
i = 1 << k
a = s ^ i
print(a)