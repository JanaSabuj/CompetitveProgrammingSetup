#include<bits/stdc++.h>
using namespace std;

// sieve start
const int N = 1e6 + 7;
vector<int> primes;
bool composite[N];// {0} initially all prime
// O(N loglogN)
void sieve() {
	for (int i = 2; i <= sqrt(N); i++) {
		if (composite[i]) continue;
		primes.push_back(i);// prime
		for (int j = i * i; j <= N; j += i)
			composite[j] = 1;
	}
}
// sieve end

int main() {

	sieve();

	for (auto x : primes)
		cout << x << " ";

	return 0;
}