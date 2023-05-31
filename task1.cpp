#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;



int main() {
	int m=2, n=3;
	int arr [m][n] = {{2, 4, 6}, {3, 7, 8}};
	int result [m];
	
	for (int i = 0; i<m; i++) {
		for (int i2 = 0; i2<n; i2++) {
			result[i] = arr[i][i2] * 10;
			cout << result [i] << endl;	
		}	
	}	
}
}
