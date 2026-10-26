
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMapping
            : public Object
         {

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: GameKey gameKey = GameKey::NULL_GAME_KEY;

public: GameInputMapping(std::string name, GameKey gameKey);

    private: void setGameKey(GameKey gameKey);

    public: GameKey getGameKey();

    private: void setName(std::string name);

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
