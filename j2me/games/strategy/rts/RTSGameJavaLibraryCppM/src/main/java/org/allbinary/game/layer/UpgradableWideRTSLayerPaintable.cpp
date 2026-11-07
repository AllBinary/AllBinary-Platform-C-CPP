
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/UpgradableWideRTSLayerPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
#include "org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"


UpgradableWideRTSLayerPaintable::UpgradableWideRTSLayerPaintable(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) : RTSLayerCompositePaintable(upgradableRTSLayerHudPaintable), cost(StringUtil::getInstance()->EMPTY_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto UpgradableWideRTSLayerPaintable::update(RTSLayer* rtsLayer) -> void{
RTSLayerCompositePaintable::update(rtsLayer);
    
this->setCost(JavaString::valueOf((new StringMaker())->append(this->getUpgradeCost())->append(CommonSeps::getInstance()->SPACE)->append(this->getDownGradeCost())));
    
}


    auto UpgradableWideRTSLayerPaintable::paint(Graphics* graphics) -> void{
graphics->drawString(this->getCost(), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY, 0);
    
}


    auto UpgradableWideRTSLayerPaintable::setCost(std::string cost) -> void{
this->cost= cost;
    
}


    auto UpgradableWideRTSLayerPaintable::getCost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cost;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_CPP
