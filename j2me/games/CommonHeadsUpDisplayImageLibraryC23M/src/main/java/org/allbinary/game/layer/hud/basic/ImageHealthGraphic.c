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
// package org.allbinary.game.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationInterface.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/game/layer/hud/basic/HealthGraphic.h"

typedef struct ImageHealthGraphic ImageHealthGraphic;
struct ImageHealthGraphic {
    HealthGraphic base;
    Image** image;
};


ImageHealthGraphic* ImageHealthGraphic_new(AnimationInterface* animationInterface, HealthInterface* healthInterface, int32_t location, int32_t direction);

void ImageHealthGraphic_init(ImageHealthGraphic* this, AnimationInterface* animationInterface, HealthInterface* healthInterface, int32_t location, int32_t direction);
void ImageHealthGraphic_paint(ImageHealthGraphic* this, Graphics* graphics);

static void ImageHealthGraphic_initFields(ImageHealthGraphic* this) {
    
}


void ImageHealthGraphic_init(ImageHealthGraphic* this, AnimationInterface* animationInterface, HealthInterface* healthInterface, int32_t location, int32_t direction) {
        HealthGraphic_init(&this->base, animationInterface, healthInterface, location, direction);
        ImageHealthGraphic_initFields(this);
        this->image = ((Image**) java_array_new(sizeof(Image*), HealthInterface_getMaxHealth(this->healthInterface)));
        ImageCacheFactory* imageCacheFactory = ImageCacheFactory_getInstance();
        for (int32_t numOfHealth = 0; numOfHealth <= this->base.max; numOfHealth++) {
            this->image[numOfHealth] = ImageCacheFactory_get(imageCacheFactory, this, numOfHealth + 1 * 10, 10);
        }
        for (int32_t numOfHealth = 0; numOfHealth <= this->base.max; numOfHealth++) {
            for (int32_t index = 0; index < numOfHealth; index++) {
                AnimationInterface_paint(this->animationInterface, JAVA_CALL(this->image[numOfHealth], getGraphics), numOfHealth * 10, 0);
            }
        }
}

ImageHealthGraphic* ImageHealthGraphic_new(AnimationInterface* animationInterface, HealthInterface* healthInterface, int32_t location, int32_t direction) {
    ImageHealthGraphic* this = calloc(1, sizeof(ImageHealthGraphic));
    ImageHealthGraphic_init(this, animationInterface, healthInterface, location, direction);
    return this;
}


void ImageHealthGraphic_paint(ImageHealthGraphic* this, Graphics* graphics) {
        Graphics_drawImage(graphics, this->image[this->base.max], this->base.x, this->base.y, Anchor_TOP_LEFT);
}

