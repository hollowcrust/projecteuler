
mod = 1008691207
n = 10**8+1
  # iterate from 1 to n, but start 2 iterations in (at 3) so we can cache calculations
total = 0
fact1 = 2 # i!
fact2 = 1 # (i-1)!
fact3 = 1 # (i-2)!
for i in range(3, n):
    total = (total + (n-i)*fact3 - fact1) % mod
    fact3 = fact2
    fact2 = fact1
    fact1 = (fact1 * i) % mod

print((total + fact1 - fact2 - 1) % mod)
