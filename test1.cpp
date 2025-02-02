//Moises Gonzalez
//2/2/2025
//
#include <iostream>
#include <chrono>
using namespace std;
int sum1(int n){
int total = 0;
for(int i = 0; i <= n; i++)
    total += i;
return total;
}
int sum2(int n)
{
if(n == 1)
    return 1;
else
    return sum2(n-1)+n;
}

int sum3(int n)
{
return n*(1+n)/2;
}
int main() {
using chrono::high_resolution_clock;
  int n = 100;
auto start = chrono::high_resolution_clock::now();
cout << "Second Method: of first " << n << " numbers is: " << sum2(n) << endl;
auto end = chrono::high_resolution_clock::now();
chrono::duration<double> duration = (end - start) * 100000;
cout << "Runtime: " << duration.count() << " seconds" << endl;
return 0;
}
