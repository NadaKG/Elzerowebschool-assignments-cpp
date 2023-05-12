#include <iostream>
using namespace std;

int main()
{
  int num_kilobytes;
  cin >> num_kilobytes;
  int num_bytes = num_kilobytes * 1024;
  int num_bits = num_bytes * 8;

  
  cout << "Number in Kilobytes: " << num_kilobytes << " Kilobytes\n";
  cout << "Number In Bytes: " << num_bytes << " Bytes\n";
  cout << "Number In Bits: " << num_bits << " Bits\n";
  return 0;

}