
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/AnalogInputBuilder.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h"
#include "org/allbinary/game/layer/special/Special1GameInputProcessor.h"
#include "org/allbinary/game/layer/special/Special3GameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/special/SpecialAnalogUpGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogDownGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogRightGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogLeftGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogLeftTriggerGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogRightTriggerGameInputProcessor.h"


AnalogInputBuilder::AnalogInputBuilder() {
        }
        auto AnalogInputBuilder::instance_owner() -> AnalogInputBuilder* { static std::unique_ptr<AnalogInputBuilder> value(new AnalogInputBuilder()); return value.get(); }
AnalogInputBuilder* AnalogInputBuilder::instance = AnalogInputBuilder::instance_owner();

    auto AnalogInputBuilder::getInstance() -> AnalogInputBuilder*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogInputBuilder::instance;
    
}


    auto AnalogInputBuilder::disable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) -> void{
inputProcessorArray[Canvas::UP]= new SpecialUpGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::DOWN]= new SpecialDownGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::RIGHT]= new SpecialRightGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::LEFT]= new SpecialLeftGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM0]= new Special1GameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM5]= new Special3GameInputProcessor(collidableDestroyableDamageableLayer);
    
}


    auto AnalogInputBuilder::enable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) -> void{
inputProcessorArray[Canvas::UP]= new SpecialAnalogUpGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::DOWN]= new SpecialAnalogDownGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::RIGHT]= new SpecialAnalogRightGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::LEFT]= new SpecialAnalogLeftGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM0]= new SpecialAnalogLeftTriggerGameInputProcessor(collidableDestroyableDamageableLayer);
    
inputProcessorArray[Canvas::KEY_NUM5]= new SpecialAnalogRightTriggerGameInputProcessor(collidableDestroyableDamageableLayer);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_CPP
