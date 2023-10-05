#include <iostream>
#include <vector>


using namespace std;

// AERSP 424 Homework 1: Question 6
// Goal: Write function named gradient_cost that
// computes equation.

double gradient_cost(double, double);//function prototype for gradient_cost

double y = 1; //given value for y
double y_predict = .504421; //value for y_predict
double dC = 0; //initalize variable dC


double gradient_cost(double y, double y_predict) //gradient_cost function
{
	dC = 2 * (y_predict - y); //function given in doc
	return dC; //return value calculated for dC
}



int main()
{
	dC = gradient_cost(y, y_predict);//call function and pass in necessary variables

	cout << "dC is equal to " << dC << endl; //print results

}


