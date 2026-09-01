
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

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameType.h"

class GameTypeFactory
            : public Object
         {

    private: static GameTypeFactory instance() { return GameTypeFactory(); }

    public: static GameTypeFactory getInstance();

    public: std::vector<GameType> NULL_GAME_TYPE_ARRAY = {};

    public: GameType NONE = GameType(StringUtil::getInstance().NULL_STRING);

    public: GameType SINGLE_PLAYER = GameType("Single Player");

    public: GameType MULTI_PLAYER = GameType("Multi Player");

    public: GameType BOT = GameType("Artificial Player");

};

            


        #endif //ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H
