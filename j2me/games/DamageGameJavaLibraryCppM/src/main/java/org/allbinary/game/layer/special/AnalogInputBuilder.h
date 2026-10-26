
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H

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

    public: static AnalogInputBuilder getInstance();

    public: void disable(std::vector<GameInputProcessor> inputProcessorArray, CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer);

    public: void enable(std::vector<GameInputProcessor> inputProcessorArray, CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
