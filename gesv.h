#ifndef TDP_GESV_H
#define TDP_GESV_H

#include "incblas.h"

// General Matrix Solve Vector "scalaire" (solve Ax=b avec b vecteur)
void tdp_dgesv(const CBLAS_ORDER order, const CBLAS_TRANSPOSE TransA,
               const int64_t N, double *A, const int64_t lda,
               double *X, const int64_t incX, const int64_t block_size);

// general matrix solve vector "bloc" (solve Ax=b avec b vecteur)
void tdp_dgesv2(const CBLAS_ORDER order, const CBLAS_TRANSPOSE TransA,
                const int64_t N, double *A, const int64_t lda,
                double *X, const int64_t incX);

#endif // TDP_GESV_H
