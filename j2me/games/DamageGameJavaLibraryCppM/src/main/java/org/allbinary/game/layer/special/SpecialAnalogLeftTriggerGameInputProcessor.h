
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"

class SpecialAnalogLeftTriggerGameInputProcessor: public SpecialGameInputProcessor {

public: SpecialAnalogLeftTriggerGameInputProcessor(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

                //@Throws(Exception.constructor)
            
    public: void processAnalog(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H
