#ifndef MLX_TRANSFORMS_H
#define MLX_TRANSFORMS_H

#include <stdio.h>

#include "mlx/c/array.h"
#include "mlx/c/closure.h"
#include "mlx/c/map.h"
#include "mlx/c/stream.h"
#include "mlx/c/string.h"

#ifdef __cplusplus
extern "C" {
#endif

void mlx_eval(const mlx_vector_array outputs);
mlx_vector_vector_array mlx_jvp(
    mlx_closure fun,
    const mlx_vector_array primals,
    const mlx_vector_array tangents);
void mlx_simplify(const mlx_vector_array outputs);
mlx_closure_value_and_grad
mlx_value_and_grad(mlx_closure fun, const int* argnums, size_t num_argnums);
mlx_vector_vector_array mlx_vjp(
    mlx_closure fun,
    const mlx_vector_array primals,
    const mlx_vector_array cotangents);

#ifdef __cplusplus
}
#endif

#endif
