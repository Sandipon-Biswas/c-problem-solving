def sieve():
    a=[0]*10001
    primes=[]
    for i in range(2,1001):
        if(a[i]==0):
            primes.append(i)
            for j in range(2,10001/i+1):
                a[i*j]=1
    return primes
if __name__ == "__main__":
    primes = sieve()
    for prime in primes:
        print(prime)