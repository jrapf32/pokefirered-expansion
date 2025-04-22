#ifndef GUARD_DECOMPRESS_H
#define GUARD_DECOMPRESS_H

#include "global.h"

#include "sprite.h"

extern u8 ALIGNED(4) gDecompressionBuffer[0x4000];

void LZDecompressWram(const void *src, void *dest);
void LZDecompressVram(const void *src, void *dest);

u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize);

u16 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src);
u32 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset);
void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer);
bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet* src);

u32 LoadCompressedSpritePalette(const struct CompressedSpritePalette *src);
u32 LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag);
void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *a, void *buffer);
bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src);
bool8 LoadCompressedSpritePaletteUsingHeapWithTag(const u32 *pal, u16 tag);

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer);

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality);

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic);

u32 GetDecompressedDataSize(const u32 *ptr);

#endif // GUARD_DECOMPRESS_H
