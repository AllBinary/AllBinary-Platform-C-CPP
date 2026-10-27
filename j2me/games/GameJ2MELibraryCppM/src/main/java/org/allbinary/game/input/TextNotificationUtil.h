
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H

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
        
class TextNotificationUtil
            : public Object
         {

    private: static TextNotificationUtil* instance() { static std::unique_ptr<TextNotificationUtil> value(new TextNotificationUtil()); return value.get(); }

    public: static TextNotificationUtil* getInstance();

                //@Throws(Exception.constructor)
            
    public: void fireError(std::string message);

                //@Throws(Exception.constructor)
            
    public: void fireNew(std::string message);

                //@Throws(Exception.constructor)
            
    public: void fireSuccess(std::string message);

    private: int32_t TWO = SmallIntegerSingletonFactory::getInstance()->getAt(2);

    private: bool FALSE = BooleanFactory::getInstance()->FALSE;

    private: GameNotificationEventHandler* gameNotificationEventHandler = GameNotificationEventHandler::getInstance();

                //@Throws(Exception.constructor)
            
    public: void fire(std::string message);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
