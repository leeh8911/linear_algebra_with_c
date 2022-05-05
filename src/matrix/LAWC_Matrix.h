#ifndef __LAWC_MATRIX_H__
#define __LAWC_MATRIX_H__

#define LAWC_MAX_ROWS (32)
#define LAWC_MAX_COLS (32)

struct _LAWC_Matrix{
int nrows;
int ncols;
float data[LAWC_MAX_ROWS * LAWC_MAX_COLS];
};
#endif //__LAWC_MATRIX_H__