
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
        



#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryVibrationME.h"
#include "AllBinaryNoVibration.h"

class AllBinaryVibration: public AllBinaryVibrationME {
        

    private: static VIBRATION: AllBinaryVibrationME = AllBinaryNoVibration.NO_VIBRATION;

    public static AllBinaryVibrationME getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryVibration.VIBRATION;
    
}


    public static init(){

                        if(GameConfigurationCentral.getInstance()!.VIBRATION.getValue()!.intValue() == 0)
                        
                                    {
                                    AllBinaryVibration.VIBRATION= AllBinaryNoVibration.NO_VIBRATION;
    

                                    }
                                
                        else {
                            AllBinaryVibration.VIBRATION= new AllBinaryVibration();
    

                        }
                            
}


private constructor (){

            super();
        }


    public vibrate(int32_t duration, int32_t type, int32_t volume){
}


};

            

