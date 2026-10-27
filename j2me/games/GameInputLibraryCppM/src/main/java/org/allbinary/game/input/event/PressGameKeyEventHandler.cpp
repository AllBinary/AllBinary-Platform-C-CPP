
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h"

auto PressGameKeyEventHandler::instance_owner() -> PressGameKeyEventHandler* { static std::unique_ptr<PressGameKeyEventHandler> value(new PressGameKeyEventHandler()); return value.get(); }
PressGameKeyEventHandler* PressGameKeyEventHandler::instance = PressGameKeyEventHandler::instance_owner();

    auto PressGameKeyEventHandler::getInstance() -> PressGameKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PressGameKeyEventHandler::instance;
    
}


PressGameKeyEventHandler::PressGameKeyEventHandler() : list(new BasicArrayListD()){
}


    auto PressGameKeyEventHandler::addListener(PlayerGameInput* playerGameInput) -> void{

                        if(!this->list->contains(playerGameInput))
                        
                                    {
                                    this->list->add(playerGameInput);
    

                                    }
                                
}


    auto PressGameKeyEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto PressGameKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto PressGameKeyEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    PlayerGameInput* playerGameInput = dynamic_cast<PlayerGameInput*>(this->list->objectArray[index]);;
    
playerGameInput->onPressGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto PressGameKeyEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    PressGameKeyEventListenerInterface* pressGameKeyEventListenerInterface = (dynamic_cast<PressGameKeyEventListenerInterface*>(eventListenerInterface));;
    
pressGameKeyEventListenerInterface->onPressGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_PRESSGAMEKEYEVENTHANDLER_CPP
