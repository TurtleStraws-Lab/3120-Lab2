//Moises Gonzalez
//2/2/2025
//
#include <iostream>
#include <chrono>
using namespace std;
int sum1(int n)
{
int total = 0;
for(int i = 0; i <= n; i++)
    total += i;
return total;
}

int main() {
using chrono::high_resolution_clock;
  int n = 100;
auto start = chrono::high_resolution_clock::now();
cout << "First Method: Sum of first " << n << " numbers is: " << sum1(n) << endl;
auto end = chrono::high_resolution_clock::now();
chrono::duration<double> duration = (end - start) * 100000;
cout << "Runtime: " << duration.count() << " seconds" << endl;
return 0;
}
