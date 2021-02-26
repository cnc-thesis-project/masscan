#include "bitmap.h"

bool in_bitmap(const char *bitmap, uint32_t bit)
{
    return bitmap[(bit >> 3)] & (1 << (bit & 0x7));
}

void set_bitmap(char *bitmap, uint32_t bit)
{
    bitmap[(bit >> 3)] |= (1 << (bit & 0x7));
}
