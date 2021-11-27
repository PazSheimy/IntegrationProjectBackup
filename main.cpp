#include <iostream>
#include "ClassExmp.h"
#include "Block.h"
using namespace std;

/*backup of blockchain implementation
i have been stuck tring to show block chain print statement in gui message box so this is my back up for milestone 2. i will keep working on the primary idea but since it has so many bugs i will turn in this one to not lost the points.


Requirements meet:
MILESTONE 1
1 Design and implement a class.

2 Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach

MILESTONE 2
3 At least one class in a header file with non-trivial methods implemented in a cpp file

4 Overload a constructor

5 Utilize an initialization list

6 Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.

*/




int main() {
    ClassExmp myObj;  // Create an object 
    Block userInfo;   // Create an object 

    

    cout << myObj.opp << myObj.pp <<myObj.fp;
    cout <<"User: " << userInfo.holderName <<" have " << userInfo.amount <<" " << userInfo.coin << endl;


    return 0;
}