#ifndef BITMAP_H
#define BITMAP_H

#include <stdbool.h>
#include <stdint.h>

bool in_bitmap(const char *bitmap, uint32_t bit);
void set_bitmap(char *bitmap, uint32_t bit);

#endif
