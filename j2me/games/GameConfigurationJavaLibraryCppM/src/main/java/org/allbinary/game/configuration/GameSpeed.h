
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationCentral.h"
#include "GameConfiguration.h"

class GameSpeed
            : public Object
         {

    private: static GameSpeed instance() { return GameSpeed(); }

    public: static GameSpeed getInstance();

    public: int32_t getSpeed();

    public: int32_t getDelay();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H
