//Moises Gonzalez
//2/2/2025
//
#include <iostream>
#include <chrono>
using namespace std;
int sum3(int n)
{
return n*(1+n)/2;
}

int main() {
using chrono::high_resolution_clock;
  int n = 100;
auto start = chrono::high_resolution_clock::now();
cout << "Third Method: of first " << n << " numbers is: " << sum3(n) << endl;
auto end = chrono::high_resolution_clock::now();
chrono::duration<double> duration = (end - start) * 100000;
cout << "Runtime: " << duration.count() << " seconds" << endl;
return 0;
}
