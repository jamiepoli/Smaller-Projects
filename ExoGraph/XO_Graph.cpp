/*Graph program with added flood-fill implementation. */

#include<iostream>
#include <list>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Exo_Graph
{
	int TotalNumNodes; //Total number of nodes in the graph

	struct exo_Node{
		struct exo_Node *north; //northern adjacent
		struct exo_Node *south; //southern adjacent
		struct exo_Node *west;
		struct exo_Node *east;
		char exo; //Either an 'X' or an 'O'


	}
  



public:
    Exo_Graph(int total);  //Constructor

    int countTheX(exo_Node *start);

    //Flood-Fill Algorithm with chars instead of colors
    void floodFill(char *start, char target, char replace);  
};

Exo_Graph::Exo_Graph(int total){
	this->TotalNumNodes = total;

}

void Exo_Graph::floodFill(exo_Node *start, char target, char replace){

	if (target == replace || *start->exo != target || !*start){
		return;
	}

	//Set char of start to replace
	start->exo = replace;

	//recursively fill the adjacent nodes
	floodFill(start->north, target, replace);
	floodFill(start->south, target, replace);
	floodFill(start->west, target, replace);
	floodFill(start->east, target, replace);
}

int Exo_Graph::countTheX(exo_Node *start){

	if (!start){
		return 0;
	}

	int count = 0;
	if (start->exo == "X"){
		count++;
		floodFill(start, "X", "O");
	}

	//move on to the adjacents
	return count + countTheX(start->north) + countTheX(start->south)
	 + countTheX(start->east) + countTheX(start->west);


}

int main(){
	Exo_Graph eg_one(3);

	/*
	this is the example:
	OXX

	Total: 1 shape. 
	*/

	struct exo_Node *one;
	struct exo_Node *two;
	struct exo_Node *three;

	one->exo = "O";
	cout << one->exo << " ";
	two->exo = "X";
	cout << two->exo << " ";
	three->exo = "X";
	cout << three->exo << " ";

	one->east = two;
	two->west = one;
	two->east = three;
	three->west = two;

	cout << "counting the X's..." << "";

	cout << countTheX(one) << "";

}


