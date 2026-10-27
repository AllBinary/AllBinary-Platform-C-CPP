
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameTypeFactory
            : public virtual Object
         {

    private: static GameTypeFactory* instance_owner();
    private: static GameTypeFactory* instance;

    public: static GameTypeFactory* getInstance();


            
    public: GameTypeFactory();
        
    public: std::vector<GameType*> NULL_GAME_TYPE_ARRAY;

    public: GameType* NONE;

    public: GameType* SINGLE_PLAYER;

    public: GameType* MULTI_PLAYER;

    public: GameType* BOT;

};

            


        #endif //ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/GameType.h")
#include "org/allbinary/game/GameType.h"
#endif

        #endif
    
