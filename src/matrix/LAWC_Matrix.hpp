#pragma once

#include <vector>

#define LAWC_MAX_ROWS (32)
#define LAWC_MAX_COLS (32)

namespace LAWC{

template<typename T>
class Matrix{
public:
Matrix(std::vector<T> data, int nrows, int ncols);
private:
int nrows;
int ncols;
std::vector<T> data;
};

}
