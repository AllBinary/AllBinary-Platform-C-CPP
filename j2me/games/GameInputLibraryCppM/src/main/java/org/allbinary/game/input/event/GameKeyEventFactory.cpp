
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/GameKeyEventFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/GameKeyEvent.h"

Object* GameKeyEventFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GameKeyEventFactory::getInstance() -> GameKeyEventFactory*{

                        if(GameKeyEventFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameKeyEventFactory::instance= new GameKeyEventFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameKeyEventFactory*>(GameKeyEventFactory::instance);
    
}


GameKeyEventFactory::GameKeyEventFactory() : logUtil(LogUtil::getInstance()), ARRAY(std::vector<std::vector<GameKeyEvent*>>(this->MAX_SOURCES, std::vector<GameKeyEvent*>(InputFactory::getInstance()->MAX))){
}


    auto GameKeyEventFactory::init() -> void{

    NullUtil* nullUtil = NullUtil::getInstance();;
    

    int32_t size = InputFactory::getInstance()->MAX;;
    




                        for (
    int32_t index = this->MAX_SOURCES;--index >= 0; )
        {




                        for (
    int32_t index2 = size;--index2 >= 0; )
        {
this->ARRAY[index][index2]= GameKeyEvent::createEvent(nullUtil->NULL_OBJECT, index, index2);
    
}

}

}


                //@Throws(Exception.constructor)
            
    auto GameKeyEventFactory::getInstanceForKey(GameKeyEventSourceInterface* anyType, int32_t key) -> GameKeyEvent*{

    GameKeyEvent* gameKeyEvent = this->ARRAY[anyType->getSourceId()][key];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}


                //@Throws(Exception.constructor)
            
    auto GameKeyEventFactory::getInstanceForInput(GameKeyEventSourceInterface* anyType, Input* input) -> GameKeyEvent*{

    GameKeyEvent* gameKeyEvent = this->ARRAY[anyType->getSourceId()][input->getId()];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_CPP
