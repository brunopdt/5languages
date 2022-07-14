n = int(input('digite um numero para ver a sequencia de fibonacci ate ele: '))
a=1
b=1

for i in range (0, n):
  if (i % 2 == 0):
    print(a, end=" ")
    a+=b
  else:
    print(b, end=" ")
    b+=a