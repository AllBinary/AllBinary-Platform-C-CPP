
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/HealthBar.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/Health.h"


HealthBar::HealthBar(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction){
this->allbinaryLayer= layerInterface;
    
this->animationInterface= animationInterface;
    
this->healthInterface= healthInterface;
    
this->healthInterface->addListener(this);
    
this->onHealthChange();
    
}


    auto HealthBar::onHealthChange() -> void{
this->animationInterface->onHealthChange(this->healthInterface->getHealth() *this->allbinaryLayer->getWidth() /this->healthInterface->getMaxHealth());
    
}


    auto HealthBar::paint(Graphics* graphics) -> void{
this->animationInterface->paintXY(graphics, 0, 0);
    
}


    auto HealthBar::paintThreed(Graphics* graphics) -> void{
this->animationInterface->paintThreedXYZ(graphics, 0, 0, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_CPP
