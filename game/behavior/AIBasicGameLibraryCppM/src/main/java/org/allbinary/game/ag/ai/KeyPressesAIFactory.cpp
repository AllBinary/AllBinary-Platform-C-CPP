
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/KeyPressesAIFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/MultiKeyPressesAI.h"
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"


KeyPressesAIFactory::KeyPressesAIFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto KeyPressesAIFactory::getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) -> ArtificialIntelligenceInterface*{

    bool isSingleKeyProcessing = InputFeatureFactory::getInstance()->isSingleKeyProcessing();;
    

                        if(isSingleKeyProcessing)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new KeyPressesAI(hashtable, ownerLayerInterface, gameInput);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MultiKeyPressesAI(hashtable, ownerLayerInterface, gameInput);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAIFACTORY_CPP
