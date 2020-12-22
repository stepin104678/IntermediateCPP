#include <iostream>
    #include <stdlib.h>
    using namespace std;
int main() {
int *parr, len = 10;
parr = new int[len];
for (int i = 0; i < len; i++)
parr[i] = std::rand() % 100;
for (int i = 0; i < len; i++)
std::cout << parr[i] << "\n";
++parr;
delete[] parr;
return 0;
}