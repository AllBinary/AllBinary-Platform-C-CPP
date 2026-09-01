
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputFactory.h"
#include "GameKey.h"
#include "GameKeyFactory.h"

class GameKeyMappingFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyMappingFactory getInstance();

    private: std::vector<GameKey> intKeyToGameKey = new Array(InputFactory::getInstance().MAX);

private: GameKeyMappingFactory();

    public: GameKey getGameKey(int32_t key);

    private: void setGameKey(GameKey gameKey);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H
