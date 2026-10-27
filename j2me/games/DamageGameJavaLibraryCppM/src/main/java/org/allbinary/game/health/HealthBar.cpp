
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

class HealthBar: public Paintable, public HealthListenerInterface {

    private: HealthBarAnimation* animationInterface;

    private: HealthInterface* healthInterface;

    protected: AllBinaryLayer* allbinaryLayer;

public: HealthBar(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction){
this->allbinaryLayer= layerInterface;
    
this->animationInterface= animationInterface;
    
this->healthInterface= healthInterface;
    
this->healthInterface->addListener(this);
    
this->onHealthChange();
    
}


    public: void onHealthChange(){
this->animationInterface->onHealthChange(this->healthInterface->getHealth() *this->allbinaryLayer->getWidth() /this->healthInterface->getMaxHealth());
    
}


    public: void paint(Graphics* graphics){
this->animationInterface->paintXY(graphics, 0, 0);
    
}


    public: void paintThreed(Graphics* graphics){
this->animationInterface->paintThreedXYZ(graphics, 0, 0, 0);
    
}


};

            

