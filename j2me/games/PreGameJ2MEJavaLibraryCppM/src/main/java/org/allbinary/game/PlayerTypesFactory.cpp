
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
        #include "PlayerType.h"

class PlayerTypesFactory
            : public Object
         {

    private: static const PlayerTypesFactory SINGLETON = PlayerTypesFactory();

    public: static PlayerTypesFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlayerTypesFactory::SINGLETON;
    
}


    public: const PlayerType PLAYER_TYPE_ONE = PlayerType("Player Type One", 0);

    public: const PlayerType PLAYER_TYPE_TWO = PlayerType("Player Type Two", 1);

    public: const PlayerType PLAYER_TYPE_THREE = PlayerType("Player Type Three", 2);

};

            

