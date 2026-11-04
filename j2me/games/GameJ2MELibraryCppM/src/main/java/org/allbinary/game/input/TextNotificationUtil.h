
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
class GameNotificationEvent;
class GameNotificationEventHandler;
class BasicColorFactory;
class BooleanFactory;
class SmallIntegerSingletonFactory;
class ErrorSound;
class PrimaryPlayerQueueFactory;
class SelectSound;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TextNotificationUtil
            : public virtual Object
         {

    private: static TextNotificationUtil* instance_owner();
    private: static TextNotificationUtil* instance;

    public: static TextNotificationUtil* getInstance();


            
    public: TextNotificationUtil();
        
                //@Throws(Exception.constructor)
            
    public: void fireError(std::string message);

                //@Throws(Exception.constructor)
            
    public: void fireNew(std::string message);

                //@Throws(Exception.constructor)
            
    public: void fireSuccess(std::string message);

    private: int32_t TWO;

    private: bool FALSE;

    private: GameNotificationEventHandler* gameNotificationEventHandler;

                //@Throws(Exception.constructor)
            
    public: void fire(std::string message);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEvent.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/ErrorSound.h>)
#include <org/allbinary/media/audio/ErrorSound.h>
#endif
#if __has_include(<org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
#endif

        #endif
    
