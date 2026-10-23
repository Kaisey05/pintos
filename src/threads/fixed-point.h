#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdint.h>

#define SCALE (1 << 14)
#define TO_FIXED(num) ((num * SCALE))
#define TO_INT(num) ((num / SCALE))

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MULTI(a, b) ((int)((int64_t) (a) * (b) / SCALE))
#define DIV(a, b) ((int) ((int64_t) (a) * SCALE / (b)))
#define ROUND(num) ((num) >= 0 ? ((num) + SCALE / 2) / SCALE : ((num) - SCALE / 2) / SCALE)

#endif


