
#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__


#include "sort.hpp"


class BubbleSort : public Sort {
    public:
        /* Constructors */
        BubbleSort() : Sort() {};

        /* Pure Virtual Functions */
        void sort(Container* container){
          int n = container->size();
            for (int i = 0; i < n-1; i++){
              // Last i elements are already in place  
              for (int j = 0; j < n - i - 1; j++){  
                  if (container->at(j)->evaluate() > container->at(j+1)->evaluate())  {
	                //cout << "swapping: " << container->at(j)->stringify() << " " << container->at(j+1)->evaluate() << endl;     
		              	container->swap(j,j+1);  
                    }
                }
            }
        }
        
        Iterator* create_iterator(){
			    return new PreorderIterator(new Ceil(nullptr));
		    }
};

#endif //__BUBBLE_SORT_HPP__


