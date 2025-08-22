#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*double vector_length (double x, double y, double z){
	double l;
	l = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
	return l;
}*/

double vector_add (double vectorA[3][1], double vectorB[3][1]){
	static double result[3][1];
	for (int i = 0; i < 3; i++){
		result[i][0] = vectorA[i][0] + vectorB[i][0];
	}
	return **result;
}

int main()
{
	double vector1[3][1];

	cout << "input vector 1 x coordinate" << endl;
	cin >> vector1[0][0];

	cout << "input vector 1 y coordinate" << endl;
	cin >> vector1[1][0];

	cout << "input vector 1 z coordinate" << endl;
	cin >> vector1[2][0];

	double vector2[3][1];

	cout << "input vector 2 x coordinate" << endl;
	cin >> vector2[0][0];

	cout << "input vector 2 y coordinate" << endl;
	cin >> vector2[1][0];

	cout << "input vector 2 z coordinate" << endl;
	cin >> vector2[2][0];

	double add = vector_add(vector1, vector2);
	cout << "Addition of vector is: " << add << endl;
	
	return 0;

}

