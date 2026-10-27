
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
        



        #ifndef ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameInfo;
class GameTypeFactory;
class GameMode;
class PlayerTypesFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicHighScoresGameInfoFactory
            : public virtual Object
         {

    private: static BasicHighScoresGameInfoFactory* SINGLETON_owner();
    private: static BasicHighScoresGameInfoFactory* SINGLETON;

    public: static BasicHighScoresGameInfoFactory* getInstance();


            
    public: BasicHighScoresGameInfoFactory();
        
    public: GameInfo* MULTI_PLAYER_SERVER;

    public: GameInfo* SINGLE_PLAYER_SERVER;

};

            


        #endif //ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/GameTypeFactory.h")
#include "org/allbinary/game/GameTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/GameMode.h")
#include "org/allbinary/game/GameMode.h"
#endif
#if __has_include("org/allbinary/game/PlayerTypesFactory.h")
#include "org/allbinary/game/PlayerTypesFactory.h"
#endif

        #endif
    
