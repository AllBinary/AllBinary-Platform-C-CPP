
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_HORIZONTALROTATIONMANEUVERAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_HORIZONTALROTATIONMANEUVERAIFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HorizontaRotationManeuverAI.h"

class HorizontalRotationManeuverAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {
        

    public ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_HORIZONTALROTATIONMANEUVERAIFACTORY_H
