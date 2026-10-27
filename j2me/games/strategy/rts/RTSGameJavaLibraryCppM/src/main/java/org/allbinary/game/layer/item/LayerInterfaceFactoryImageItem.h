
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>
class Animation;
class BasicColor;
class LayerInterfaceFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerInterfaceFactoryImageItem: public ABCustomImageItem {

    private: std::vector<Animation*> animationArray;

    private: LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface;

public: LayerInterfaceFactoryImageItem(std::string label, Image* img, int32_t layout, std::string altText, BasicColor* basicColor, std::vector<Animation*> animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

    public: LayerInterfaceFactoryInterface* getLayerInterfaceFactoryInterface();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomImageItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterfaceFactoryInterface.h>)
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
#endif

        #endif
    
