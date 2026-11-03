
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class GameKeyEvent;
#include <org/allbinary/game/input/event/GameKeyEventListenerInterface.h>
class ForcedLogUtil;
class PreLogUtil;
class StringMaker;
class AllBinaryEventObject;
class EventStrings;
class CommonLabels;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInput.h"
class GameInputStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerGameInput: public GameInput, public virtual GameKeyEventListenerInterface {

    /*protected*/ public: GameInputStrings* gameInputStrings;

    private: int32_t playerInputId;

public: PlayerGameInput(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownKey(int32_t gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpKeyEvent(int32_t gameKeyEvent);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: int32_t getPlayerInputId();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventListenerInterface.h>)
#include <org/allbinary/game/input/event/GameKeyEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/input/GameInput.h")
#include "org/allbinary/game/input/GameInput.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif

        #endif
    
