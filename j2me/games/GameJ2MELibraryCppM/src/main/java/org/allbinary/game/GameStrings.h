
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameStrings
            : public virtual Object
         {

    private: static GameStrings* instance_owner();
    private: static GameStrings* instance;

    public: static GameStrings* getInstance();


            
    public: GameStrings();
        
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

            


        #endif //ORG_ALLBINARY_GAME_GAMESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GAMESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GAMESTRINGS_H_COMPLETE
        
        #endif
    
