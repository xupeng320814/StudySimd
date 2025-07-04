#include <immintrin.h>

void mul4_vectorized(float* ptr)
{
        __m128 f = _mm_loadu_ps(ptr);
        f = _mm_mul_ps(f, f);
        _mm_storeu_ps(ptr, f);
}

int main()
{
        return 0;
}