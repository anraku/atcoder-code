import math
import os
n = int(input())
i = 3
data = [2]
if n is 2:
  print(n)
else:
  while True:
    flag = True
    for d in data:
      if d > math.sqrt(i):
        break
      elif i % d == 0:
        flag = False
        break
    if flag:
      if i >= n:
        break
      data.append(i)
    i += 2
  print (i)

