#include<iostream>
#include<string>
#include<cmath>

using namespace std;

double vector_length (double x, double y, double z){
	double l;
	l = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
	return l;
}

int main()
{
	double l,x,y,z;
	double vector[3][1];

	cout << "input x coordinate" << endl;
	cin >> vector[0][0];

	cout << "input y coordinate" << endl;
	cin >> vector[1][0];

	cout << "input z coordinate" << endl;
	cin >> vector[2][0];


	l = vector_length(vector[0][0], vector[1][0], vector[2][0]);
	cout << "The length of the vector is: " << l << endl;
	
	
	
	
	return 0;

}

