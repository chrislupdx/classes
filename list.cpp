#include "list.h"

//constructors
list::list()
{
 head = nullptr; //what does this actually maen
}

//copy constructor
list::list(const list & new_copy)  
{//copy this array to new_copy
  
  
  const list to_copy_hr = to_copy;
  list ** new_list = new list *;
  //copy to_copy into new_list (specifically copy the nodes)
  //int listsize = 0;
  //call a piece of data out of a referenced list
  std::cout << to_copy_hr->head;
  //while(to_copy_hr[head].next != nullptr) 
  //{
  //list
  //size++;
  //}
//return the new array
}

list::~list()
{
  if(head != nullptr)
  {
    while(node->head != nullptr)
    {
      //delete whatever
    }
    delete [] head; //check this is correct
  }
}


