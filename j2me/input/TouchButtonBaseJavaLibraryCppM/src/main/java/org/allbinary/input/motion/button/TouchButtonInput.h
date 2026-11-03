
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GameKey;
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#include <org/allbinary/game/input/Input.h>
class InputFactory;
class GameKeyEvent;
class GameKeyEventFactory;
class InputToGameKeyMapping;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonInput: public Input, public virtual GameKeyEventSourceInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: GameKeyEventFactory* gameKeyEventFactory;

    private: const int32_t TOUCH_BUTTON_SOURCE_ID;

    private: GameKeyEvent* gameKeyEvent;

public: TouchButtonInput(int32_t id, std::string name);

    public: void update(InputToGameKeyMapping* inputToGameKeyMapping);

    public: int32_t getSourceId();

    public: GameKeyEvent* getGameKeyEvent();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
