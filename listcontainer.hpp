#ifndef __LIST_CONTAINER_HPP__
#define __LIST_CONTAINER_HPP__

#include <list>
#include <iterator>
#include <iostream>
#include "container.hpp"

#include "sort.hpp"
#include "bubbleSort.hpp"


class Sort;

class ListContainer : public Container{
	
	private:
		list<Base*> containers;
	public:
		ListContainer() : Container() {sort_function=nullptr;}
		ListContainer(Sort* function) : Container(function){}

		virtual void add_element(Base* element){containers.push_back(element);}
		virtual void print(){
			list<Base*> :: iterator it;
			for(it = containers.begin(); it!= containers.end(); it++){
				Base* base = *it;			
				cout << base->evaluate() << endl;	
			} 
		}
		virtual void sort(){
			if (this->sort_function == nullptr){
				throw std::invalid_argument("Sort function was not set");
			}else {
				this->sort_function->sort(this);
			}
		}
	
		virtual void swap(int i, int j){
			list<Base*> :: iterator it = containers.begin();
			advance(it,i);
			auto it2=containers.begin();
			advance(it2,j);
			std::iter_swap(it,it2);
		}

		virtual Base* at(int i){
			list<Base*> :: iterator it = containers.begin();
			advance(it,i);
			return *it;
				
		}
		virtual int size(){ return containers.size(); }
};

#endif
