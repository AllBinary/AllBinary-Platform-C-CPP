
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"

class NoPlayerGameInput: public PlayerGameInput {

    private: static NoPlayerGameInput* SINGLETON() { static std::unique_ptr<NoPlayerGameInput> value(new NoPlayerGameInput()); return value.get(); }

    public: static NoPlayerGameInput* getInstance();

private: NoPlayerGameInput();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
