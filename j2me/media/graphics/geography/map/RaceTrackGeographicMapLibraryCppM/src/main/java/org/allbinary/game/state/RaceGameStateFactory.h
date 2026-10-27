
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameStateFactory;
class GameState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceGameStateFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static RaceGameStateFactory* getInstance();


            
    public: RaceGameStateFactory();
        
    public: GameState* START_GAME_STATE;

    public: GameState* YELLOW_LIGHT_GAME_STATE;

    public: GameState* RED_LIGHT_GAME_STATE;

};

            


        #endif //ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif

        #endif
    
