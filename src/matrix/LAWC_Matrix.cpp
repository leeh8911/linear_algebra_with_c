#include "LAWC_Matrix.hpp"

namespace LAWC{
    template<typename T>
    Matrix<T>::Matrix(std::vector<T> data, int nrows, int ncols) : nrows(nrows), ncols(ncols), data(data){
        cout << nrows << ", " << ncols << "\n";
    }
}