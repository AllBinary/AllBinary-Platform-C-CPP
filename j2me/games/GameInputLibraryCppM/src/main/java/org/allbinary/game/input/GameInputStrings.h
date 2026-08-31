
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputStrings
            : public Object
         {
        

    private: static const instance: GameInputStrings = new GameInputStrings();

    public static GameInputStrings getInstance();

    public const PROCESS_INPUT: string = "processInput";

    public const KEY_PRESSED: string = "keyPressed";

    public const KEY_RELEASED: string = "keyReleased";

    public const KEY_REPEATED: string = "keyRepeated";

    public const ON_PRESS_GAME_KEY: string = "onPressGameKeyEvent";

    public const ON_DOWN_GAME_KEY: string = "onDownGameKeyEvent";

    public const ON_UP_GAME_KEY: string = "onUpGameKeyEvent";

    public const NO_KEY: string = "Key Code Not Mapped For Game: ";

    public const ADD_KEY_EVENT: string = "addGameKeyEvent";

    public const REMOVE_KEY_EVENT: string = "removeGameKeyEvent";

    public const STRAFE_LEFT: string = "strafeLeft";

    public const STRAFE_RIGHT: string = "strafeRight";

    public const PROCESS_MOTION_INPUT: string = "processMotionInput";

    public const UDPATE_CURRENT_TOUCH_INPUT_FACTORY: string = "updateCurrentTouchInputFactory";

    public const ENABLE_PLAYER_GAME_INPUTS: string = "Enabling PlayerGameInputs: ";

    public const ENABLE_PLAYER_GAME_INPUT: string = "Enabling PlayerGameInput: ";

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H
