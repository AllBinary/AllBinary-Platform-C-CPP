/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/ImageItem.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h"
#include "org/allbinary/game/layer/item/RTSLayerTextAnimation.h"
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/game/layer/waypoint/FlagGameResources.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/item/CustomItemUtil.h"
#include "org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"

typedef struct UnitItemArrayFactory UnitItemArrayFactory;
struct UnitItemArrayFactory {
    ItemArraySingletonFactoryInterface ItemArraySingletonFactoryInterface_interface;
    CommonSeps* commonSeps;
    BasicColor* basicColor;
    BasicGameResources** resources;
};

static ABCustomItem** UnitItemArrayFactory_ITEMS;

UnitItemArrayFactory* UnitItemArrayFactory_new(BasicGameResources** resources);

void UnitItemArrayFactory_init(UnitItemArrayFactory* this, BasicGameResources** resources);
ABCustomItem* UnitItemArrayFactory_createFlagItem(UnitItemArrayFactory* this, FlagGameResources* flagResources, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
ABCustomItem* UnitItemArrayFactory_createNamedFlagItem(UnitItemArrayFactory* this, FlagGameResources* flagResources, const char* name, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
ABCustomItem** UnitItemArrayFactory_getItems(UnitItemArrayFactory* this);
BasicGameResources** UnitItemArrayFactory_getResources(UnitItemArrayFactory* this);
int32_t UnitItemArrayFactory_indexOf(UnitItemArrayFactory* this, BasicGameResources* basicGameResources);

// Static fields with runtime initializers: call this once at startup
void UnitItemArrayFactory_staticInit(void) {
    UnitItemArrayFactory_ITEMS = CustomItemUtil_getInstance()->CUSTOM_ITEM_ARRAY;
}

static void UnitItemArrayFactory_initFields(UnitItemArrayFactory* this) {
    this->commonSeps = CommonSeps_getInstance();
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void UnitItemArrayFactory_init(UnitItemArrayFactory* this, BasicGameResources** resources) {
    UnitItemArrayFactory_initFields(this);
        this->resources = resources;
}

UnitItemArrayFactory* UnitItemArrayFactory_new(BasicGameResources** resources) {
    UnitItemArrayFactory* this = calloc(1, sizeof(UnitItemArrayFactory));
    UnitItemArrayFactory_init(this, resources);
    return this;
}


// throws Exception
ABCustomItem* UnitItemArrayFactory_createFlagItem(UnitItemArrayFactory* this, FlagGameResources* flagResources, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        const char* name = flagResources->NAME;
        int32_t index = java_string_indexOf(name, this->commonSeps->SPACE);
        if (index >= 0) {
            name = java_substring(name, index, (int32_t) strlen(name));
        }
        return UnitItemArrayFactory_createNamedFlagItem(this, flagResources, name, layerInterfaceFactoryInterface);
}


// throws Exception
ABCustomItem* UnitItemArrayFactory_createNamedFlagItem(UnitItemArrayFactory* this, FlagGameResources* flagResources, const char* name, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        ImageCache* IMAGE_CACHE = GameFeatureImageCacheFactory_getInstance();
        Image* image = ImageCache_getWithKey(IMAGE_CACHE, flagResources->RESOURCE_ICON);
        ABCustomItem* item = LayerInterfaceFactoryImageItem_new(name, image, ImageItem_LAYOUT_DEFAULT, flagResources->NAME, this->basicColor, ((Animation**) java_array_from(sizeof(Animation*), sizeof((Animation*[]){ RTSLayerTextAnimation_new(RTSGameStrings_getInstance()->DRAGGABLE, image) }) / sizeof(Animation*), (Animation*[]){ RTSLayerTextAnimation_new(RTSGameStrings_getInstance()->DRAGGABLE, image) })), layerInterfaceFactoryInterface);
        return item;
}


// throws Exception
ABCustomItem** UnitItemArrayFactory_getItems(UnitItemArrayFactory* this) {
        return UnitItemArrayFactory_ITEMS;
}


BasicGameResources** UnitItemArrayFactory_getResources(UnitItemArrayFactory* this) {
        return this->resources;
}


int32_t UnitItemArrayFactory_indexOf(UnitItemArrayFactory* this, BasicGameResources* basicGameResources) {
        for (int32_t index = java_array_length(this->resources) - 1; index >= 0; index--) {
            if (this->resources[index] == basicGameResources) {
                return index;
            }
        }
        return -1;
}

