
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/AllBinaryVibrationME.h"
#include "org/allbinary/media/AllBinaryNoVibration.h"

class AllBinaryVibration: public AllBinaryVibrationME {

    private: static inline AllBinaryVibrationME* VIBRATION = AllBinaryNoVibration::NO_VIBRATION;

    public: static AllBinaryVibrationME* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryVibration::VIBRATION;
    
}


    public: static void init(){

                        if(GameConfigurationCentral::getInstance()->VIBRATION->getValue()->intValue() == 0)
                        
                                    {
                                    AllBinaryVibration::VIBRATION= AllBinaryNoVibration::NO_VIBRATION;
    

                                    }
                                
                        else {
                            AllBinaryVibration::VIBRATION= new AllBinaryVibration();
    

                        }
                            
}


private: AllBinaryVibration(){
}


    public: void vibrate(int32_t duration, int32_t type, int32_t volume){
}


};

            

