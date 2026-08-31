
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

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInfo.h"
#include "GameTypeFactory.h"
#include "GameMode.h"
#include "PlayerTypesFactory.h"

class BasicHighScoresGameInfoFactory
            : public Object
         {
        

    private: static const SINGLETON: BasicHighScoresGameInfoFactory = new BasicHighScoresGameInfoFactory();

    public static BasicHighScoresGameInfoFactory getInstance();

    public const MULTI_PLAYER_SERVER: GameInfo = new GameInfo(GameTypeFactory.getInstance()!.MULTI_PLAYER, GameMode.SERVER, PlayerTypesFactory.getInstance()!.PLAYER_TYPE_ONE, 0, 0);

    public const SINGLE_PLAYER_SERVER: GameInfo = new GameInfo(GameTypeFactory.getInstance()!.SINGLE_PLAYER, GameMode.SERVER, PlayerTypesFactory.getInstance()!.PLAYER_TYPE_ONE, 0, 0);

};

            


        #endif //ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H
