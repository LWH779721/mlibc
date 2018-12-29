#ifndef __MMATH_H__
#define __MMATH_H__

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>
/*
*   check num a and num b has same sign, if yes return 1
*   ex. a >= 0 and b >= 0 return 1
*/
extern int mmath_check_same_sign(int a, int b);

/*
*   enlarge num a to Multiple of 4
*   ex. 3 to 4, 5 to 8
*/
extern int mmath_extend_to_pow4(int a);

/*
* 将size 扩大至 4096 的倍数
*/
static inline mmath_extend_to_blocks(uint32_t size)
{
    return (size + 0xFFF)&(~0xFFF);
}

#ifdef __cplusplus
}
#endif
#endif