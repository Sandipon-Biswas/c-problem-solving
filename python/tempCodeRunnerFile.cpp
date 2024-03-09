bool hasTwoPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0 && isPrime(i)) {
            count++;
        }
    }
    return count == 2;
}
