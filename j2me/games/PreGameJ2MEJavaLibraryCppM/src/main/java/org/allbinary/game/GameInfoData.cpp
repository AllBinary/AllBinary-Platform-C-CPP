
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
        
class GameInfoData
            : public Object
         {
        

    private: static const instance: GameInfoData = new GameInfoData();

    public static GameInfoData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInfoData.instance;
    
}


private constructor (){

            super();
        }


    public const GAME_TYPE: string = "GAME_TYPE";

    public const GAME_MODE: string = "GAME_MODE";

    public const PLAYER_TYPE: string = "PLAYER_TYPE";

    public const HIGHEST_LEVEL: string = "HIGHEST_LEVEL";

    public const CURRENT_LEVEL: string = "CURRENT_LEVEL";

    public const SOFTWARE_INFORMATION: string = "SOFTWARE_INFORMATION";

};

            

