
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInfo.h"
#include "GameTypeFactory.h"
#include "GameMode.h"
#include "PlayerTypesFactory.h"

class BasicHighScoresGameInfoFactory
            : public Object
         {

    private: static const BasicHighScoresGameInfoFactory SINGLETON = BasicHighScoresGameInfoFactory();

    public: static BasicHighScoresGameInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicHighScoresGameInfoFactory::SINGLETON;
    
}


    public: const GameInfo MULTI_PLAYER_SERVER = GameInfo(GameTypeFactory::getInstance().MULTI_PLAYER, GameMode::SERVER, PlayerTypesFactory::getInstance().PLAYER_TYPE_ONE, 0, 0);

    public: const GameInfo SINGLE_PLAYER_SERVER = GameInfo(GameTypeFactory::getInstance().SINGLE_PLAYER, GameMode::SERVER, PlayerTypesFactory::getInstance().PLAYER_TYPE_ONE, 0, 0);

};

            

