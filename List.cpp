#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

//Make sure your own files for the List and ListItr
//classes are included here.  These are the names I used.
#include "List.h"
#include "ListItr.h"
#include "ListNode.h"

List::List(){
  //default constructor
}


List::~List(){
  //deconstructor

}

List& List::operator = (const List& source){

}  




bool List::isEmpty() const{
//Returns true if empty; else false


}
//---------------------------------------------------------------------
void List::makeEmpty(){
//Removes all items except blank head and tail

}


//---------------------------------------------------------------------

ListItr List::first(){
//Returns an iterator that points to the ListNode in the first position
}



//---------------------------------------------------------------------

ListItr List::last(){
//Returns an iterator that points to the ListNode in the last position
}



//---------------------------------------------------------------------
void List::insertAfter(int x, ListItr position){
//Inserts x after current iterator position p
}





//---------------------------------------------------------------------
void List::insertBefore(int x, ListItr position){
 //Inserts x before current iterator position p




}

//---------------------------------------------------------------------
void  List::insertAtTail(int x){
 //Insert x at tail of list
}





//---------------------------------------------------------------------
void List::remove(int x){
//Removes the first occurrence of x




}
//---------------------------------------------------------------------
ListItr List::find(int x){




  
}
//---------------------------------------------------------------------
int List::size() const{
//Returns the number of elements in the list



  
}
