
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
        



        #ifndef ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H
        #define ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GameState;
class GameStateFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IntermissionFactory
            : public virtual Object
         {

    private: static IntermissionFactory* instance_owner();
    private: static IntermissionFactory* instance;

    public: static IntermissionFactory* getInstance();


            
    public: IntermissionFactory();
        
    public: GameState* START_LEVEL_INTERMISSION_GAME_STATE;

    public: GameState* WAIT_LEVEL_INTERMISSION_GAME_STATE;

    public: GameState* SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE;

    public: GameState* SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE;

};

            


        #endif //ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif

        #endif
    
