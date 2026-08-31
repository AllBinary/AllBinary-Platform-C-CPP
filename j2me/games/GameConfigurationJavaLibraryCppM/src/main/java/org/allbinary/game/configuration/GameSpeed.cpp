
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
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationCentral.h"
#include "GameConfiguration.h"

class GameSpeed
            : public Object
         {
        

    private: static const instance: GameSpeed = new GameSpeed();

    public static GameSpeed getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameSpeed.instance;
    
}


    public int32_t getSpeed(){

    speedGameConfiguration: GameConfiguration = GameConfigurationCentral.getInstance()!.SPEED;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (speedGameConfiguration!.getMaxValue()!.intValue() -speedGameConfiguration!.getValue()!.intValue() +1);
    
}


    public int32_t getDelay(){

    speedGameConfiguration: GameConfiguration = GameConfigurationCentral.getInstance()!.SPEED;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 19 *(speedGameConfiguration!.getMaxValue()!.intValue() -speedGameConfiguration!.getValue()!.intValue());
    
}


};

            

