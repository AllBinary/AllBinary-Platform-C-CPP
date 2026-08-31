
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMESTRINGS_H
        #define ORG_ALLBINARY_GAME_GAMESTRINGS_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameStrings
            : public Object
         {
        

    private: static const instance: GameStrings = new GameStrings();

    public static GameStrings getInstance();

    public const PROCESS_TICK: string = "processTick";

    public const ON_GAME_INITIALIZED: string = "onGameInitialized";

    public const UPDATESURFACE: string = "updateSurface";

    public const ON_SET_DISPLAYABLE: string = "onSetDisplayable";

    public const UNPAUSE: string = "unPause";

    public const TOGGLE_MENU: string = "toggleMenu";

    public const SET_GAME_OVER: string = "setGameOver";

    public const GAME_STATE: string = "Game State: ";

    public const SET_GAME_STATE: string = "setGameState";

    public const STOP_GAME_CANVAS_RUNNABLE_INTERFACE: string = "stopGameCanvasRunnableInterface";

};

            


        #endif //ORG_ALLBINARY_GAME_GAMESTRINGS_H
