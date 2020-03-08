a,b,k = map(int, input().split())

if k < a:
  a = a-k
  print (a, b)
else:
  b = max(0, b-(k - a))
  a = 0
  print(a, b)