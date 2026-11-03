
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h"
        

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
        

LayerInterfaceFactoryImageItem::LayerInterfaceFactoryImageItem(std::string label, Image* img, int32_t layout, std::string altText, BasicColor* basicColor, std::vector<Animation*> animationArray, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) : ABCustomImageItem(label, img, layout, altText, basicColor, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationArray= animationArray;
    
this->layerInterfaceFactoryInterface= layerInterfaceFactoryInterface;
    
}


    auto LayerInterfaceFactoryImageItem::getLayerInterfaceFactoryInterface() -> LayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerInterfaceFactoryInterface;
    
}


    auto LayerInterfaceFactoryImageItem::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
ABCustomImageItem::paintXY(graphics, x, y);
    




                        for (
    int32_t index = this->animationArray.size();--index >= 0; )
        {
this->animationArray[index]->paintXY(graphics, x, y);
    
}

}




        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_LAYERINTERFACEFACTORYIMAGEITEM_CPP
