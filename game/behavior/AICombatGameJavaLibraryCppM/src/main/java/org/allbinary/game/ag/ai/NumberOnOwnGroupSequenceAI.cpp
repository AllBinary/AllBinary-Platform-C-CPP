
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/NumberOnOwnGroupSequenceAI.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ag/ai/sequence/SequenceAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NumberOnOwnGroupSequenceAI::NumberOnOwnGroupSequenceAI(std::vector<int32_t> numberOnSameTeam, std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : SequenceAI(artificialIntelligenceInterface, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->numberOnSameTeam= numberOnSameTeam;
    
}


                //@Throws(Exception.constructor)
            
    auto NumberOnOwnGroupSequenceAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    AllBinaryLayer* layerInterface = this->getOwnerLayerInterface();;
    

    int32_t index = this->getIndex();;
    

                        if(this->numberOnSameTeam.size() > index)
                        
                                    {
                                    
    int32_t size = GroupLayerManagerListener::getInstance()->getGroupSizeFromInterface(layerInterface);;
    

                        if(this->numberOnSameTeam[index].intValue() > size)
                        
                                    {
                                    this->next();
    

                                    }
                                

                                    }
                                
SequenceAI::processAI(allBinaryLayerManager);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_CPP
