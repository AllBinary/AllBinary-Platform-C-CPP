
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialUpGameInputProcessor.h"
#include "SpecialDownGameInputProcessor.h"
#include "SpecialRightGameInputProcessor.h"
#include "SpecialLeftGameInputProcessor.h"
#include "Special1GameInputProcessor.h"
#include "Special3GameInputProcessor.h"
#include "CollidableDestroyableDamageableLayer.h"
#include "SpecialAnalogUpGameInputProcessor.h"
#include "SpecialAnalogDownGameInputProcessor.h"
#include "SpecialAnalogRightGameInputProcessor.h"
#include "SpecialAnalogLeftGameInputProcessor.h"
#include "SpecialAnalogLeftTriggerGameInputProcessor.h"
#include "SpecialAnalogRightTriggerGameInputProcessor.h"

class AnalogInputBuilder
            : public Object
         {

    private: static AnalogInputBuilder instance() { return AnalogInputBuilder(); }

    public: static AnalogInputBuilder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogInputBuilder::instance();
    
}


    public: void disable(std::vector<GameInputProcessor> inputProcessorArray, CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer){
inputProcessorArray[Canvas::UP]= SpecialUpGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::DOWN]= SpecialDownGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::RIGHT]= SpecialRightGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::LEFT]= SpecialLeftGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM0]= Special1GameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM5]= Special3GameInputProcessor(collidableDestroyableDamageableLayer);
    
}


    public: void enable(std::vector<GameInputProcessor> inputProcessorArray, CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer){
inputProcessorArray[Canvas::UP]= SpecialAnalogUpGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::DOWN]= SpecialAnalogDownGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::RIGHT]= SpecialAnalogRightGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::LEFT]= SpecialAnalogLeftGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM0]= SpecialAnalogLeftTriggerGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM5]= SpecialAnalogRightTriggerGameInputProcessor(collidableDestroyableDamageableLayer);
    
}


};

            

