// This is a stub code (or skeleton code) just to allow the first compilation.

#include <iostream>
#include "les_v1.h"

using namespace std;

//! Prints the list.
/*! This a debugging function that prints the list content.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 */
void print( SNPtr _pAIL )
{
	cout << "[ ";
	while(_pAIL != nullptr){
		cout << _pAIL->miData << " ";
		_pAIL = _pAIL->mpNext;
	}
	cout << "]\n";

}

//! Length of the list.
/*! Calculates and return the length of the list. Length is zero, if list is empty.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 *  @return The length.
 */
int length( SNPtr _pAIL )
{
	auto count(0);
	while(_pAIL != nullptr){
		count++;
		_pAIL = _pAIL->mpNext;

	}
    return count;
}


bool empty( SNPtr _pAIL )
{
	return (_pAIL == nullptr);
}


void clear( SNPtr & _pAIL )
{
	SNPtr aux;
	while(_pAIL != nullptr){
		aux = _pAIL->mpNext;
		delete aux->mpNext;
		_pAIL = aux;
	}
}


bool front( SNPtr _pAIL, int & _retrievedVal )
{
	if(_pAIL == nullptr){
		_retrievedVal = 0;
		return false;
	}
	else{
		_retrievedVal = _pAIL->miData;
    	return true;
    }
}


bool back( SNPtr _pAIL, int & _retrievedVal )
{
	if(_pAIL == nullptr){
		return false;
	}
	else{
		while(_pAIL->mpNext != nullptr){
			_pAIL = _pAIL->mpNext;
		}
		_retrievedVal = _pAIL->miData;
	    return true;
	}
}


bool pushFront( SNPtr & _pAIL, int _newVal )
{
	SNPtr tmp (new SLLNode);
	tmp->mpNext = _pAIL;
	tmp->miData = _newVal;
	_pAIL = tmp;
    return true;
}


bool pushBack( SNPtr & _pAIL, int _newVal )
{
	SNPtr aux = _pAIL;
	SNPtr tmp (new SLLNode);
	tmp->mpNext = nullptr;
	tmp->miData = _newVal;
	while(aux->mpNext != nullptr){
		aux = aux->mpNext;
	}
	aux->mpNext = tmp;

    return true;
}


bool popFront( SNPtr & _pAIL, int & _retrievedVal )
{
    return true;
}


bool popBack( SNPtr & _pAIL, int& _retrievedVal )
{
    return true;
}


SNPtr find( SNPtr _pAIL, int _targetVal )
{
    return NULL;
}


bool insert( SNPtr & _pAIL, SNPtr _pAnte, int _newVal )
{
    return true;
}


bool remove( SNPtr & _pAIL, SNPtr _pAnte, int & _retrievedVal )
{
    return true;
}


//**** ===================[ End of les_v1.cpp ]=================== ****// 
