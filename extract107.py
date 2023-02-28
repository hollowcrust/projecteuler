cnt = 0
a = (input().replace(' ', ',')).split(',')
for i in range(40):
  for j in range(40):
    if(a[40 * i + j] == '-'):
      continue
    else:
      b = int(a[40 * i + j])
      if(i < j):
        cnt += 1
        print(i + 1, j + 1, b)
print(cnt)
