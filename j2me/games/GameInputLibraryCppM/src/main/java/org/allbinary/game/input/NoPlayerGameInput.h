
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

#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"

class NoPlayerGameInput: public PlayerGameInput {
        

    private: static const SINGLETON: NoPlayerGameInput = new NoPlayerGameInput();

    public static NoPlayerGameInput getInstance();

private constructor ();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onDownGameKeyEvent(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onUpGameKeyEvent(GameKeyEvent gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
