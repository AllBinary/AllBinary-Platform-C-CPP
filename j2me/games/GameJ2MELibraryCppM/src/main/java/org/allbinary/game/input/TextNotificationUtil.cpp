
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_CPP
        #define ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/TextNotificationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TextNotificationUtil::TextNotificationUtil() : TWO(SmallIntegerSingletonFactory::getInstance()->getAt(2)), FALSE(BooleanFactory::getInstance()->FALSE), gameNotificationEventHandler(GameNotificationEventHandler::getInstance()) {
        }
        auto TextNotificationUtil::instance_owner() -> TextNotificationUtil* { static std::unique_ptr<TextNotificationUtil> value(new TextNotificationUtil()); return value.get(); }
TextNotificationUtil* TextNotificationUtil::instance = TextNotificationUtil::instance_owner();

    auto TextNotificationUtil::getInstance() -> TextNotificationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TextNotificationUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto TextNotificationUtil::fireError(std::string message) -> void{
PrimaryPlayerQueueFactory::getInstance()->add(ErrorSound::getInstance());
    
this->fire(message);
    
}


                //@Throws(Exception.constructor)
            
    auto TextNotificationUtil::fireNew(std::string message) -> void{
PrimaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    
this->fire(message);
    
}


                //@Throws(Exception.constructor)
            
    auto TextNotificationUtil::fireSuccess(std::string message) -> void{
PrimaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    
this->fire(message);
    
}


                //@Throws(Exception.constructor)
            
    auto TextNotificationUtil::fire(std::string message) -> void{

    GameNotificationEvent* gameNotificationEvent = new GameNotificationEvent(this, message, this->TWO, BasicColorFactory::getInstance()->RED, this->FALSE);;
    
this->gameNotificationEventHandler->fireEvent(gameNotificationEvent);
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_CPP
