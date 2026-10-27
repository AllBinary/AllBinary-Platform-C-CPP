
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputFactory;
class GameKey;
class GameKeyFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyMappingFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static GameKeyMappingFactory* getInstance();

    private: std::vector<GameKey*> intKeyToGameKey;

private: GameKeyMappingFactory();

    public: GameKey* getGameKey(int32_t key);

    private: void setGameKey(GameKey* gameKey);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif

        #endif
    
