
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_BASICAI_CPP
        #define ORG_ALLBINARY_GAME_AI_BASICAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ai/BasicAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/game/displayable/canvas/CanvasUtil.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t BasicAI::AI_VISITOR = SmallIntegerSingletonFactory::getInstance()->getAt(2);
int32_t BasicAI::ID = SmallIntegerSingletonFactory::getInstance()->getAt(1);

BasicAI::BasicAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), gameKeyEventFactory(GameKeyEventFactory::getInstance()){
this->ownerLayerInterface= ownerLayerInterface;
    
this->gameInput= gameInput;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicAI::processKeyAI(int32_t key) -> void{

                        if(key !=  -1)
                        
                                    {
                                    this->gameInput->add(this->gameKeyEventFactory->getInstanceForKey(this, key));
    

                                    }
                                
}


    auto BasicAI::setLastKey(int32_t lastKey) -> void{
this->lastKey= lastKey;
    
}


    auto BasicAI::getLastKey() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastKey;
    
}


    auto BasicAI::getOwnerLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownerLayerInterface;
    
}


    auto BasicAI::getGameInput() -> GameInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInput;
    
}


    auto BasicAI::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


    auto BasicAI::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append(this->getName());
    
stringBuffer->append(" LastKey: ");
    
stringBuffer->append(CanvasUtil::getKeyName(this->getLastKey()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto BasicAI::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}




        #endif //ORG_ALLBINARY_GAME_AI_BASICAI_CPP
