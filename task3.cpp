#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;



int main() {
	int m=2, n=3;
	int arr [m][n] = {{2,3,4}, {5,6,7}};
	int arr2[m];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = arr2[j];
			cout << arr[i][j];
			
	}
	}	
}
    
