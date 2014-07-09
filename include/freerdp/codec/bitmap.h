/**
 * FreeRDP: A Remote Desktop Protocol Client
 * Compressed Bitmap
 *
 * Copyright 2011-2013 Jay Sorg <jay.sorg@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __BITMAP_H
#define __BITMAP_H

#include <freerdp/types.h>

struct bitmap_extra
{
    uint8* temp;
    int flags;
    int pad0;
    int pad1;
    int pad2;
};

typedef struct bitmap_extra bitmapExtra;

FREERDP_API tbool bitmap_decompress(uint8* srcData, uint8* dstData, int width, int height, int size, int srcBpp, int dstBpp);
FREERDP_API tbool bitmap_decompress_ex(uint8* srcData, uint8* dstData, int width, int height, int size, int srcBpp, int dstBpp, bitmapExtra* be);

#endif /* __BITMAP_H */
