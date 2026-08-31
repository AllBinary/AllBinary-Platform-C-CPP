
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyValuePersistance.h"
#include "GamePersistanceStrings.h"

class GamePersistanceSingleton: public KeyValuePersistance {
        

    private: static GAME_PERSISTANCE: GamePersistanceSingleton = new GamePersistanceSingleton();

    public static GamePersistanceSingleton getInstance();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H
