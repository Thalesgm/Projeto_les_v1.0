// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
using std::cout;


int main ( void ) {
    SNPtr pHead = NULL;// nullptr;
    bool _empty = empty( pHead);
    if(_empty){
    	cout << "Empty List\n";
    }
    else{
    	cout << "Not Empty List\n";
    }
    pushFront( pHead, 1 );
    pushFront( pHead, 2 );
    pushFront( pHead, 3 );
    pushFront( pHead, 4 );
    pushFront( pHead, 5 );
    pushBack( pHead, 5 );
  	print(pHead);
  	cout << "Lenght of list above:" << length(pHead) << "\n";
  	int first;
  	front(pHead, first);
  	cout << "First element of list above:" << first << "\n";
  	int last;
  	back(pHead, last);
  	cout << "Last element of list above:" << last << "\n";
  	clear(pHead);
  	_empty = empty( pHead);
    if(_empty){
    	cout << "Empty List\n";
    }
    else{
    	cout << "Not Empty List\n";
    }

    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
