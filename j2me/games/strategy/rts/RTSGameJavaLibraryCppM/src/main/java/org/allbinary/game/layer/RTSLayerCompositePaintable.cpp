
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"


RTSLayerCompositePaintable::RTSLayerCompositePaintable(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) : upgradeCost(StringUtil::getInstance()->EMPTY_STRING), downGradeCost(StringUtil::getInstance()->EMPTY_STRING){
this->upgradableRTSLayerHudPaintable= upgradableRTSLayerHudPaintable;
    
}


    auto RTSLayerCompositePaintable::update(RTSLayer* rtsLayer) -> void{

                        if(rtsLayer->isUpgradeable())
                        
                                    {
                                    this->setUpgradeCost((new StringMaker())->append(this->UPGRADE)->appendint(rtsLayer->getUpgradeCost())->toString());
    

                                    }
                                
                        else {
                            this->setUpgradeCost(StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            

                        if(rtsLayer->isDowngradeable())
                        
                                    {
                                    this->setDownGradeCost((new StringMaker())->append(this->DOWNGRADE)->appendint(rtsLayer->getDowngradeCost())->toString());
    

                                    }
                                
                        else {
                            this->setDownGradeCost(StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            
}


    auto RTSLayerCompositePaintable::paint(Graphics* graphics) -> void{
graphics->drawString(this->getDownGradeCost(), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY1, 0);
    
graphics->drawString(this->getUpgradeCost(), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY, 0);
    
}


    auto RTSLayerCompositePaintable::setUpgradeCost(std::string upgradeCost) -> void{
this->upgradeCost= upgradeCost;
    
}


    auto RTSLayerCompositePaintable::getUpgradeCost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->upgradeCost;
    
}


    auto RTSLayerCompositePaintable::setDownGradeCost(std::string downGradeCost) -> void{
this->downGradeCost= downGradeCost;
    
}


    auto RTSLayerCompositePaintable::getDownGradeCost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->downGradeCost;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_CPP
