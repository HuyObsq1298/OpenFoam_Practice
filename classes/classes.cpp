#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Vectors {

	public:

	int printVector1();
	void setVector1();

	int printVector2();
	void setVector2();

	int printAddedVectors();
	void addVectors();

	Vectors(); //constructor will be automatically called when an object is created
		   //you can create many constructors but with different number or type of parametersI
	~Vectors();//destructor will always be the last function to be called when an object is destroyed
	protected:

	private:
	double vector2[3][1];
	double vector1[3][1];
	double vector_add[3][1];
};


int Vectors::printVector1(){

	cout << "we are printing vectors" << endl;
	for (int i = 0 ; i < 3; i++){
	cout << "vector 1 in row" << " " << i << " " << "is" << endl;
	cout << vector1[i][0] << endl;
	}
	return 0;
}

void Vectors::setVector1(){
	for (int i = 0 ; i < 3; i++){
	cout << "input vector 1 coordinate is" << endl;
	cin >> vector1[i][0];
	}
}


int Vectors::printVector2(){
 	for (int i = 0 ; i < 3; i++){
        cout << "vector 2 in row" << " " << i << " " << "is" << endl;
        cout << vector2[i][0] << endl;
        }
        return 0;
}

void Vectors::setVector2(){
 	for (int i = 0 ; i < 3; i++){
        cout << "input vector 2 coordinate is" << endl;
        cin >> vector2[i][0];
        }
}


void Vectors::addVectors(){
        for (int i = 0; i < 3; i++){
                vector_add[i][0] = vector1[i][0] + vector2[i][0];
        }
}

int Vectors::printAddedVectors(){
	cout << "We are printing added vectors" << endl;
	for (int i = 0; i < 3; i++){
		cout << "the sum vector in row " << i << " and column 1 is " << vector_add[i][0] << endl;
	}
	return 0;
}

Vectors::Vectors(){
// intializing the vector
	for (int i = 0 ; i < 3; i++){
	vector1[i][0] = 0;
	vector2[i][0] = 0;
	}
}

Vectors::~Vectors(){
	cout << "destructing the vectors" << endl;
}


int main()
{
	
	//we need to import the class into the main function, it is also known as creating an object 
	
	Vectors vec; //vec here is a object
	vec.setVector1();
	vec.setVector2();
	vec.addVectors();
	vec.printAddedVectors();
	//vec.printVector1();
	//vec.printVector2();

	return 0;

}

