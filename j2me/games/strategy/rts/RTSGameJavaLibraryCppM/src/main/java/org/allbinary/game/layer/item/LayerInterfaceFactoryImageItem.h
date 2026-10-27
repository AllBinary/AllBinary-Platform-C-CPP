
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerInterfaceFactoryImageItem: public ABCustomImageItem {

    private: std::vector<Animation*> animationArray;

    private: LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface;

public: LayerInterfaceFactoryImageItem(std::string label, Image* img, int32_t layout, std::string altText, BasicColor* basicColor, std::vector<Animation*> animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

    public: LayerInterfaceFactoryInterface* getLayerInterfaceFactoryInterface();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H
