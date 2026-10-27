
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/ArrayAI.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ArrayAI::ArrayAI(std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->artificialIntelligenceInterfaceArray= artificialIntelligenceInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto ArrayAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    int32_t size = this->artificialIntelligenceInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->artificialIntelligenceInterfaceArray[index]->processAI(allBinaryLayerManager);
    
}

}


    auto ArrayAI::getArtificialIntelligenceInterface() -> std::vector<ArtificialIntelligenceInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artificialIntelligenceInterfaceArray;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_CPP
