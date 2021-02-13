#include <cstdint>

int ProjectAndMax_Gray8(
                const void* ptrSrc,
                std::uint32_t width,
                std::uint32_t height,
                std::uint32_t stride,
                float shrinkX,
                float shrinkY,
                void* pDst,
                std::uint32_t strideDst);
                