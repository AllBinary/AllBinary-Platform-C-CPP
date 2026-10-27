
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameKeyEvent;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoPlayerGameInput: public PlayerGameInput {

    private: static NoPlayerGameInput* SINGLETON_owner();
    private: static NoPlayerGameInput* SINGLETON;

    public: static NoPlayerGameInput* getInstance();

private: NoPlayerGameInput();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif

        #endif
    
