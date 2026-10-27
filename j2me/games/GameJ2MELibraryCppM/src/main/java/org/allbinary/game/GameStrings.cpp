
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameStrings
            : public Object
         {

    private: static GameStrings* instance() { static std::unique_ptr<GameStrings> value(new GameStrings()); return value.get(); }

    public: static GameStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameStrings::instance();
    
}


    public: const std::string PROCESS_TICK = "processTick";

    public: const std::string ON_GAME_INITIALIZED = "onGameInitialized";

    public: const std::string UPDATESURFACE = "updateSurface";

    public: const std::string ON_SET_DISPLAYABLE = "onSetDisplayable";

    public: const std::string UNPAUSE = "unPause";

    public: const std::string TOGGLE_MENU = "toggleMenu";

    public: const std::string SET_GAME_OVER = "setGameOver";

    public: const std::string GAME_STATE = "Game State: ";

    public: const std::string SET_GAME_STATE = "setGameState";

    public: const std::string STOP_GAME_CANVAS_RUNNABLE_INTERFACE = "stopGameCanvasRunnableInterface";

};

            

