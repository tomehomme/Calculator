#ifndef __VECTOR_CONTAINER_HPP__
#define __VECTOR_CONTAINER_HPP__

#include <vector>
#include <iostream>

#include "container.hpp"
#include "sort.hpp"
#include "bubbleSort.hpp"

class Sort;


class VectorContainer : public Container{
    private:
      vector<Base*> containers;
      

    public:
     VectorContainer() : Container(){ sort_function = nullptr;}
      VectorContainer(Sort* function) : Container(function) {}
      
      virtual void add_element(Base* element){
          containers.push_back(element);
      }

      virtual void print(){
          for (int i = 0; i  < containers.size(); i++){
             cout << this->containers.at(i)->evaluate() << endl;
          }
      }
  
      virtual void sort(){
     	if (this->sort_function == nullptr) {
		throw std::invalid_argument("Sort function was not set");
	} else {
		this->sort_function->sort(this);
	}
      }
  
      virtual void swap(int i, int j){
        Base* temp = containers.at(i);
        containers.at(i) = containers.at(j);
        containers.at(j) = temp;
      }
  
      virtual Base* at(int i){
          return containers.at(i);
      }
  
      virtual int size(){
          return this->containers.size();
      }
   
};

#endif
