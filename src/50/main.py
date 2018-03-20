import math

def isprime(x):
    count=0
    for i in range(2, int(math.sqrt(x))+1):
        if(x % i==0):
            count += 1
            break
    if (count == 0):
        return True
    return False

primes = []

for i in range(2,100000):
    if (isprime(i)):
        primes.append(i)

print(primes[:10])