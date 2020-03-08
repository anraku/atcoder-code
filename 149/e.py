n, m = map(int, input().split())
p = [x for x in list(map(int, input().split()))]

p.sort(reverse=True)
print (p)

i,j = (0,0)
s = 0
count = 0

while True:
  print (i,j)
  s += p[i]
  s += p[j]
  count += 1
  if count >= m:
    break
  i += 1
  print (i,j)
  s += p[i]
  s += p[j]
  count += 1
  if count >= m:
    break
  j += 1
  i -= 1
  print (i,j)
  s += p[i]
  s += p[j]
  count += 1
  if count >= m:
    break
  i += 1

print(s)