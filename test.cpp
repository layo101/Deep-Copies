
#include "LL1.h"
#include "LL2.h"

#include <iostream>
using namespace std;

void listTest();

int main() {
	cout << "!!!Hello!!!" << endl;
        listTest();
	cout << "!!!Goodbye!!!" << endl; 
	return 0;
}

void listTest(){

        cout << "A little exercise with the LL1 linked list class." << endl ;
	LL1 ls1;
	cout << "List1 is an empty LL1 instance." << endl;
	cout << "Add 5,4,3,2,1 onto List1." << endl;
	ls1.add(5);
	ls1.add(4);
	ls1.add(3);
	ls1.add(2);
	ls1.add(1);
	cout << "List1 should be [1,2,3,4,5]" << endl;
	cout << "List1 is:"; ls1.printList(); cout << endl << endl; 

	cout << "Make List2 a copy of List1" << endl;
	LL1 ls2(ls1);
        cout << "List2 is:" ; ls2.printList() ; cout << endl;

	cout << "Remove the 2 from List1, and insert 9 at index 3 in List2." << endl;
	ls1.remove(2);
	ls2.insertAt(3,9);
        cout << "List1 should be [1,3,4,5]; List2 should be [1,2,3,9,4,5]." << endl;
        cout << "List1 is:" ; ls1.printList() ; cout << endl ;  
        cout << "List2 is:" ; ls2.printList() ; cout << endl ;  
	cout << endl;

        cout << "Now, the same little exercise with the LL2 linked list class." << endl ;
	LL2 ls3;
	cout << "List3 is an empty LL2 instance." << endl;
	cout << "Add 15,14,13,12,11 onto List3." << endl;
	ls3.add(15);
	ls3.add(14);
	ls3.add(13);
	ls3.add(12);
	ls3.add(11);
	cout << "List3 should be [11,12,13,14,15]" << endl;
	cout << "List3 is:"; ls3.printList(); cout << endl << endl; 

	cout << "Make List4 a copy of List3" << endl;
	LL2 ls4(ls3);
        cout << "List4 is:" ; ls4.printList() ; cout << endl;

	cout << "Remove the 12 from List3, and insert 19 at index 3 in List4." << endl;
	ls3.remove(12);
	ls4.insertAt(3,19);
        cout << "List3 should be [11,13,14,15]; List4 should be [11,12,13,19,14,15]." << endl;
        cout << "List3 is:" ; ls3.printList() ; cout << endl ;  
        cout << "List4 is:" ; ls4.printList() ; cout << endl ;  
	cout << endl;
}
