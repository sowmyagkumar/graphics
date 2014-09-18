//Breseham's Midpoint algoirthm for Line drawing


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define make_pair mp //For map
#define push_back pb //For vector
#define first x //For STL::pair
#define second y


 class Line{

	double m; // slope

public:
	double draw(pair<int, int> p1, pair<int, int> p2)
	{
		
		//Boundary Cases
		if (p1.x == p2.x)
		{
			int inc = p2.y > p1.y ? 1 : -1;

		} //Vertical

		if (p1.y == p2.y){


		} //Horizontal

		m = (double) (p2.y - p1.y) / (p2.x - p1.x);


	};//draw
stacks and queues.

stack<double> s;
s.push(<double>);
s.pop();
*/

