#include <cassert>
#include "Matrix.hpp"

namespace LAWC{
    using std::vector;

    void Matrix::initialize_address(Address* current){
        if (!current) return;
        if (current->level == dim-1){
            current->next = new double[size[current->level]];
            return;
        }
        current->next = new Address[size[current->level]];
        for(int i = 0; i != size[current->level]; i++){
            (static_cast<Address*>(current->next) + i)->level = current->level + 1;

            initialize_address(static_cast<Address*>(current->next) + i);
        }
    }

    Matrix::Matrix(int dim, vector<int> size) : dim(dim), size(size){
        top = new Address;
        top->level = 0;

        initialize_address(top);
    }
}