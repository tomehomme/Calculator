#ifndef __SELECTION_SORT_HPP__
#define __SELECITON_SORT_HPP__

#include "sort.hpp"

class SelectionSort: public Sort{

	public:
		SelectionSort() : Sort(){};

		void sort(Container* container){
			int i,j,minDex;
			for(int i = 0; i< container->size() - 1 ;i++){
				minDex=i;
				for(int j=i+1; j < container->size(); j++){
					if(container->at(j)->evaluate() < container->at(minDex)->evaluate()){
						minDex=j;
					}
				}
				if (minDex != i){container->swap(minDex,i);}
			}
		}

	
			


};

#endif
