
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>

      
#include <org/allbinary/game/ag/ai/ArrayAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SequenceAI::SequenceAI(std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : ArrayAI(artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto SequenceAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{
this->getArtificialIntelligenceInterface()[this->index]->processAI(allBinaryLayerManager);
    
}


    auto SequenceAI::next() -> void{
this->index++;
    

    ArtificialIntelligenceInterface* artificialIntelligenceInterface = this->getSelectedArtificialIntelligenceInterface();;
    

                        if(artificialIntelligenceInterface->getId() == ArtificialIntelligence::AI_ID)
                        
                                    {
                                    
    ArtificialIntelligenceTransitionInterface* artificialIntelligenceTransitionInterface = dynamic_cast<ArtificialIntelligenceTransitionInterface*>(artificialIntelligenceInterface);;
    
artificialIntelligenceTransitionInterface->transition();
    

                                    }
                                
}


    auto SequenceAI::getIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->index;
    
}


    auto SequenceAI::setIndex(int32_t index) -> void{
this->index= index;
    
}


    auto SequenceAI::getSelectedArtificialIntelligenceInterface() -> ArtificialIntelligenceInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getArtificialIntelligenceInterface()[this->index];
    
}


    auto SequenceAI::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SequenceAI::SEQUENCE_AI;
    
}


    auto SequenceAI::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(ArrayAI::toString());
    
stringBuffer->append(" Selected AI: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(this->getSelectedArtificialIntelligenceInterface()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_CPP
