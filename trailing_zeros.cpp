
#include <cmath>
#include <iostream>
 
int main(){
using namespace std;
	int sum = 0;
	int num;
	int five = 5;
	int poi = 1;
	cin >> num;
	while(pow(five,poi)<=num){
		sum+=num/pow(five,poi);
		poi++;
		}
	cout << sum << '\n';
 
return 0;
}
