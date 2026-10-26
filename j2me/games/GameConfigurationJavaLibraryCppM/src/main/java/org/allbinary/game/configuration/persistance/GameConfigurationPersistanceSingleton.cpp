
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyValuePersistance.h"
#include "GamePersistanceStrings.h"

class GameConfigurationPersistanceSingleton: public KeyValuePersistance {

    private: static GameConfigurationPersistanceSingleton GAME_PERSISTANCE = GameConfigurationPersistanceSingleton();

    public: static GameConfigurationPersistanceSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationPersistanceSingleton::GAME_PERSISTANCE;
    
}


private: GameConfigurationPersistanceSingleton() : KeyValuePersistance(GamePersistanceStrings::getInstance().SAVED_GAME_CONFIGURATION_RECORD_ID){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

