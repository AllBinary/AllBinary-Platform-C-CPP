/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer.item

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
#include "org/allbinary/graphics/form/item/ABCustomImageItem.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"

typedef struct LayerInterfaceFactoryImageItem LayerInterfaceFactoryImageItem;
struct LayerInterfaceFactoryImageItem {
    ABCustomImageItem base;
    Animation** animationArray;
    LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface;
};


LayerInterfaceFactoryImageItem* LayerInterfaceFactoryImageItem_new(const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, Animation** animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

void LayerInterfaceFactoryImageItem_init(LayerInterfaceFactoryImageItem* this, const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, Animation** animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
LayerInterfaceFactoryInterface* LayerInterfaceFactoryImageItem_getLayerInterfaceFactoryInterface(LayerInterfaceFactoryImageItem* this);
void LayerInterfaceFactoryImageItem_paintXY(LayerInterfaceFactoryImageItem* this, Graphics* graphics, int32_t x, int32_t y);

static void LayerInterfaceFactoryImageItem_initFields(LayerInterfaceFactoryImageItem* this) {
    
    
}


void LayerInterfaceFactoryImageItem_init(LayerInterfaceFactoryImageItem* this, const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, Animation** animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        ABCustomImageItem_init(&this->base, label, img, layout, altText, basicColor, 0);
        LayerInterfaceFactoryImageItem_initFields(this);
        this->animationArray = animationArray;
        this->layerInterfaceFactoryInterface = layerInterfaceFactoryInterface;
}

LayerInterfaceFactoryImageItem* LayerInterfaceFactoryImageItem_new(const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, Animation** animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
    LayerInterfaceFactoryImageItem* this = calloc(1, sizeof(LayerInterfaceFactoryImageItem));
    LayerInterfaceFactoryImageItem_init(this, label, img, layout, altText, basicColor, animationArray, layerInterfaceFactoryInterface);
    return this;
}


LayerInterfaceFactoryInterface* LayerInterfaceFactoryImageItem_getLayerInterfaceFactoryInterface(LayerInterfaceFactoryImageItem* this) {
        return this->layerInterfaceFactoryInterface;
}


void LayerInterfaceFactoryImageItem_paintXY(LayerInterfaceFactoryImageItem* this, Graphics* graphics, int32_t x, int32_t y) {
        ABCustomImageItem_paintXY((&this->base), graphics, x, y);
        for (int32_t index = java_array_length(this->animationArray); --index >= 0; ) {
            JAVA_CALL(this->animationArray[index], paintXY, graphics, x, y);
        }
}

