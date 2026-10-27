
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

class AnalogInputBuilder
            : public Object
         {

    private: static AnalogInputBuilder* instance() { static std::unique_ptr<AnalogInputBuilder> value(new AnalogInputBuilder()); return value.get(); }

    public: static AnalogInputBuilder* getInstance();

    public: void disable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

    public: void enable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
