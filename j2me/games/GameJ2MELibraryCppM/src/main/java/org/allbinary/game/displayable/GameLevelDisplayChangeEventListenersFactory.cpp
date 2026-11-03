
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameLevelDisplayChangeEventListenersFactory::GameLevelDisplayChangeEventListenersFactory() : list(new BasicArrayListD()) {
        }
        auto GameLevelDisplayChangeEventListenersFactory::instance_owner() -> GameLevelDisplayChangeEventListenersFactory* { static std::unique_ptr<GameLevelDisplayChangeEventListenersFactory> value(new GameLevelDisplayChangeEventListenersFactory()); return value.get(); }
GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory::instance = GameLevelDisplayChangeEventListenersFactory::instance_owner();

    auto GameLevelDisplayChangeEventListenersFactory::getInstance() -> GameLevelDisplayChangeEventListenersFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameLevelDisplayChangeEventListenersFactory::instance;
    
}


    auto GameLevelDisplayChangeEventListenersFactory::add(DisplayChangeEventListener* displayChangeEventListener) -> void{
this->list->add(displayChangeEventListener);
    
DisplayChangeEventHandler::getInstance()->addListenerInterface(displayChangeEventListener);
    
}


    auto GameLevelDisplayChangeEventListenersFactory::clear() -> void{

    BasicEventHandler* displayChangeEventHandler = DisplayChangeEventHandler::getInstance();;
    

    DisplayChangeEventListener* displayChangeEventListener;;
    




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {
displayChangeEventListener= dynamic_cast<DisplayChangeEventListener*>(this->list->objectArray[index]);
    
displayChangeEventHandler->removeListener(displayChangeEventListener);
    
}

this->list->clear();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_CPP
