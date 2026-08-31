
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInfo.h"

class GameInfoCopyFactory
            : public Object
         {
        

    public static GameInfo getInstanceMaxLevel(GameInfo gameInfo, int32_t maxLevel){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameInfo(gameInfo!.getGameType(), gameInfo!.getGameMode(), gameInfo!.getPlayerType(), maxLevel, gameInfo!.getCurrentLevel());
    
}


    public static GameInfo getInstance(GameInfo gameInfo){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameInfo(gameInfo!.getGameType(), gameInfo!.getGameMode(), gameInfo!.getPlayerType(), gameInfo!.getHighestLevel(), gameInfo!.getCurrentLevel());
    
}


};

            

