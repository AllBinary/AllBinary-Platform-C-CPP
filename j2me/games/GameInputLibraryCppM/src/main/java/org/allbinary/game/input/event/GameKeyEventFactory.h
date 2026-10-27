
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameKeyEventSourceInterface;
class Input;
class InputFactory;
class NullUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameKeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyEventFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static GameKeyEventFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: const int32_t TOUCH_BUTTON_SOURCE_ID = 2;

    public: const int32_t MOTION_GESTURE_SOURCE_ID = 3;

    private: const int32_t MAX_SOURCES = 4;

    private: std::vector<std::vector<GameKeyEvent*>> ARRAY;

private: GameKeyEventFactory();

    public: void init();

                //@Throws(Exception.constructor)
            
    public: GameKeyEvent* getInstanceForKey(GameKeyEventSourceInterface* anyType, int32_t key);

                //@Throws(Exception.constructor)
            
    public: GameKeyEvent* getInstanceForInput(GameKeyEventSourceInterface* anyType, Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

        #endif
    
