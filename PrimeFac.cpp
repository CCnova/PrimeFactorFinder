//Program in c++ to find all the prime factors of a given number


#include <bits/stdc++.h>

using namespace std;

void primeFinder(int x)
{
	while(x%2 == 0) // While x is divided by 2 the least prime factor is 2 
	{
		cout << 2 << " ";
		x = x/2;
	}
	//After the step above, x must be odd
	//Then, if x is odd we can skip a number
	for(int i = 3; i < sqrt(x); i += 2) //i stops before sqrt(x) because sqrt(x)
										//is the bigger number that divides x
	{
		while(x%i == 0)
		{
			cout << i << " ";
			x = x/i;
		}
	}

	//If x is already a prime number bigger than 2, just print it
	if(x > 2)
	{
		cout << x << endl;
	}
}

int main()
{
	int n;
	cout << "Please enter the number that will be factorized: ";
	cin >> n;

	cout << '\n';

	primeFinder(n);

	return 0;
}