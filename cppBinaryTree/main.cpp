#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;

map<int, int> BinaryMap;
map<int, int> :: iterator bMap;

int indexNum = 1;
int valueNum;

struct Node{

    int data; //The data that the node is going to contain.
    struct Node* right; //Defining nodes right as a pointer to the given Node struct
    struct Node* left; //Defining nodes left as a pointer to the given Node struct
};

struct Node* appendNode(int inputData){  //Creating a function to add Nodes and making this function as a pointer of the given struct
    struct Node* myNode = new (struct Node); //Defining a new node by using the 'new' keyword.
    myNode -> data = inputData; //Giving the data to the new node.
    myNode -> right = NULL; //Defining nodes right as NULL
    myNode -> left = NULL; //Defining nodes left as NULL
    return myNode;

}

void recursiveFuncPreOrder(struct Node* inputRoot,int index, int algoSelect, int targetNum){
    switch(algoSelect){

        case 1:
        valueNum = inputRoot -> data;
        if (valueNum == targetNum){
            BinaryMap[indexNum] = valueNum;
            //break;
        }
        if ((inputRoot -> left) != NULL){
            recursiveFuncPreOrder(inputRoot -> left,++indexNum,algoSelect,targetNum);
        }

        if ((inputRoot -> right) != NULL){
            recursiveFuncPreOrder(inputRoot -> right,++indexNum,algoSelect,targetNum);
        }
        break;

        /*

        case 2:
        if ((inputRoot -> left) != NULL){
            recursiveFuncPreOrder(inputRoot -> left,++indexNum,algoSelect,targetNum);
        }

        if ((inputRoot -> right) != NULL){
            recursiveFuncPreOrder(inputRoot -> right,++indexNum,algoSelect,targetNum);
        }
        valueNum = inputRoot -> data;
        if (valueNum == targetNum){
            BinaryMap[indexNum] = valueNum;
        }
        break;

        case 3:
        if ((inputRoot -> left) != NULL){
            recursiveFuncPreOrder(inputRoot -> left,++indexNum,algoSelect,targetNum);
        }

        valueNum = inputRoot -> data;
        if (valueNum == targetNum){
            BinaryMap[indexNum] = valueNum;
        }

        if ((inputRoot -> right) != NULL){
            recursiveFuncPreOrder(inputRoot -> right,++indexNum,algoSelect,targetNum);
        }
        break;

        */

    }
}
void findingIndex(struct Node* parentNode, int algoSelection, int targetNumber){

    recursiveFuncPreOrder(parentNode, indexNum, algoSelection, targetNumber);
    //cout << "Index: " << indexNum << "Node Value: " << valueNum << endl;



    //BinaryMap[indexNum] = valueNum;
    for (bMap = BinaryMap.begin(); bMap != BinaryMap.end(); bMap++){
        cout << "Index: " << bMap -> first << " Node Value: " << bMap -> second << endl;
    }



}

int main()
{
    struct Node* rootNode; //= appendNode(4); //Creating a root Node which is a pointer to the given struct
    int x;
    cout << "Enter a input value: " << endl;
    cin >> x;
    rootNode = appendNode(1);
    rootNode -> right = appendNode(2);
    rootNode -> right -> left = appendNode(7);
    rootNode -> right -> right = appendNode(1);
    rootNode -> left = appendNode(10);
    rootNode -> left -> right = appendNode(4);
    rootNode -> left -> left = appendNode(5);
    int algorithmSelection = 1;
    //cout << "With which algorithm do you want to select: (Pre-Order - 1, Post-Order - 2, In-Order - 3)" << endl;
    //cin >> algorithmSelection; Out of order for know
    findingIndex(rootNode, algorithmSelection, x);
    return 0;
}

