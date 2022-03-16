/*
 * Widescreen patch for The Settlers: 10th anniversary by zocker_160
 * 
 * This source code is licensed under GPL-v3
 * 
 */
#pragma once
#include <Windows.h>

#define URLMAX 100

struct memoryPTR {
    DWORD base_address;
    int total_offsets;
    int offsets[];
};

struct threadData {
    bool bDebugMode;
    bool bWideView;
    float ZoomIncrement;
    bool bBannerPatch;
    char BannerURL_1[URLMAX]; // used in main menu
    char BannerURL_2[URLMAX]; // used in lobby screen
    char BannerURL_3[URLMAX]; // unknown
};

const int version_maj = 1;
const int version_min = 4;

DWORD WINAPI ZoomPatchThread(LPVOID param);
