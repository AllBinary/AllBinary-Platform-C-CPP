
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/GameType.h"

class GameTypeFactory
            : public Object
         {

    private: static GameTypeFactory* instance() { static std::unique_ptr<GameTypeFactory> value(new GameTypeFactory()); return value.get(); }

    public: static GameTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameTypeFactory::instance();
    
}


    public: std::vector<GameType*> NULL_GAME_TYPE_ARRAY = {};

    public: GameType* NONE = new GameType(StringUtil::getInstance()->NULL_STRING);

    public: GameType* SINGLE_PLAYER = new GameType("Single Player");

    public: GameType* MULTI_PLAYER = new GameType("Multi Player");

    public: GameType* BOT = new GameType("Artificial Player");

};

            

