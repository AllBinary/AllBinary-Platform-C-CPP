/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameFeatureImageCacheFactory GameFeatureImageCacheFactory;
struct GameFeatureImageCacheFactory {
    char unused;
};


GameFeatureImageCacheFactory* GameFeatureImageCacheFactory_new(void);
ImageCache* GameFeatureImageCacheFactory_getInstance(void);
void GameFeatureImageCacheFactory_init(void);
void GameFeatureImageCacheFactory_releaseAll(void);

void GameFeatureImageCacheFactory_init(GameFeatureImageCacheFactory* this) {
}

GameFeatureImageCacheFactory* GameFeatureImageCacheFactory_new(void) {
    GameFeatureImageCacheFactory* this = calloc(1, sizeof(GameFeatureImageCacheFactory));
    GameFeatureImageCacheFactory_init(this);
    return this;
}


ImageCache* GameFeatureImageCacheFactory_getInstance(void) {
        return ImageCacheFactory_getInstance();
}


void GameFeatureImageCacheFactory_init(void) {
        ImageCacheFactory_init();
}


void GameFeatureImageCacheFactory_releaseAll(void) {
        ImageCacheFactory_releaseAll(ImageCacheFactory_getInstance());
}

