
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

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerInterfaceFactoryImageItem: public ABCustomImageItem {
        

    private: const animationArray: std::vector<Animation>;

    private: const layerInterfaceFactoryInterface: LayerInterfaceFactoryInterface;

public constructor (string label, Image img, int32_t layout, string altText, BasicColor basicColor, std::vector<Animation> animationArray, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface);

    public LayerInterfaceFactoryInterface getLayerInterfaceFactoryInterface();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_H
