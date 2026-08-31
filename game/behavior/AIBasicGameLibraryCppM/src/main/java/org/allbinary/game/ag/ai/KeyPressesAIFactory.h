
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MultiKeyPressesAI.h"
#include "KeyPressesAI.h"

class KeyPressesAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_H
