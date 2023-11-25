#include <iostream>
using namespace std;
int main() {
  int k,n;
  cin >>k>>n;
  int arr[101];
  for (int i = 0; i<k; i++) {
    cin >> arr[i];
  }
  int num=0;
  for (int i=0; i<k;i++) {
     for(int j=i+1;j<k;j++)
     {
         if((arr[i]+arr[j])%n==0)
         {
             num++;
         }
     }
     
  }
  cout<<num;
  return 0;
}