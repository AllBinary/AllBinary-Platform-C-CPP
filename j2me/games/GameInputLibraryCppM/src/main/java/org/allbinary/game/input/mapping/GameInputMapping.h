
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

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMapping
            : public Object
         {
        

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: gameKey: GameKey = GameKey.NULL_GAME_KEY;

public constructor (string name, GameKey gameKey);

    setGameKey(GameKey gameKey);

    public GameKey getGameKey();

    setName(string name);

    public string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
