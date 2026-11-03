
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerHudPaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"

auto RTSLayerHudPaintable::instance_owner() -> RTSLayerHudPaintable* { static std::unique_ptr<RTSLayerHudPaintable> value(new RTSLayerHudPaintable()); return value.get(); }
RTSLayerHudPaintable* RTSLayerHudPaintable::instance = RTSLayerHudPaintable::instance_owner();

    auto RTSLayerHudPaintable::getInstance() -> RTSLayerHudPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSLayerHudPaintable::instance;
    
}


RTSLayerHudPaintable::RTSLayerHudPaintable() : weaponProperties(StringUtil::getInstance()->getArrayInstance()), rtsLayer(CollidableDestroyableDamageableLayer::getNullInstance()){
}


    auto RTSLayerHudPaintable::updateMeasurement(Graphics* graphics) -> void{
SelectionHudPaintable::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->costY1= (this->y +((this->weaponProperties.size() +1) *this->fontHeight));
    

                        if(!AndroidUtil::isAndroid())
                        
                                    {
                                    this->costY= this->costY1;
    

                                    }
                                
                        else {
                            this->costY= (this->y +((this->weaponProperties.size() +2) *this->fontHeight));
    

                        }
                            
}


    auto RTSLayerHudPaintable::updateSelectionInfo() -> void{
this->setName(this->getRtsLayer()->getName());
    

    BasicWeaponPart* partInterface = dynamic_cast<BasicWeaponPart*>(this->getRtsLayer()->getPartInterfaceArray()[0]);;
    
this->weaponProperties= partInterface->getWeaponProperties()->toStringArray();
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto RTSLayerHudPaintable::paint(Graphics* graphics) -> void{
SelectionHudPaintable::paint(graphics);
    

    int32_t size = this->weaponProperties.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics->drawString(this->weaponProperties[index], this->textX, this->y +((index +1) *this->fontHeight), 0);
    
}

}


    auto RTSLayerHudPaintable::setRtsLayer(RTSLayer* rtsLayer) -> void{
this->rtsLayer= rtsLayer;
    
}


    auto RTSLayerHudPaintable::getRtsLayer() -> CollidableDestroyableDamageableLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_CPP
