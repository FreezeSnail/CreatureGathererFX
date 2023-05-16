#pragma once

#define WORLD_WIDTH 14
#define WORLD_HEIGHT 7
enum TileType { GRASS, WATER, TREES, STONE };

static TileType gameMap[WORLD_HEIGHT][WORLD_WIDTH] = {
    {TREES, GRASS, GRASS, WATER, GRASS, GRASS, GRASS, TREES, GRASS, GRASS,
     GRASS, GRASS, GRASS, TREES},
    {GRASS, WATER, WATER, WATER, GRASS, WATER, GRASS, GRASS, GRASS, GRASS,
     GRASS, STONE, GRASS, GRASS},
    {GRASS, GRASS, GRASS, GRASS, GRASS, WATER, STONE, GRASS, GRASS, GRASS,
     TREES, GRASS, GRASS, GRASS},
    {STONE, GRASS, GRASS, STONE, TREES, WATER, WATER, WATER, GRASS, WATER,
     WATER, GRASS, TREES, GRASS},
    {GRASS, GRASS, GRASS, GRASS, TREES, GRASS, GRASS, GRASS, TREES, WATER,
     GRASS, GRASS, STONE, TREES},
    {GRASS, GRASS, GRASS, WATER, STONE, GRASS, GRASS, TREES, TREES, TREES,
     GRASS, GRASS, WATER, WATER},
    {GRASS, WATER, WATER, TREES, GRASS, WATER, WATER, TREES, TREES, GRASS,
     GRASS, GRASS, GRASS, STONE}};