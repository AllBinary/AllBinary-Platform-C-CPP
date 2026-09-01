
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
        



        #ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H
        #define ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H

#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryVibrationME.h"
#include "AllBinaryNoVibration.h"

class AllBinaryVibration: public AllBinaryVibrationME {

    private: static AllBinaryVibrationME VIBRATION = AllBinaryNoVibration::NO_VIBRATION;

    public: static AllBinaryVibrationME getInstance();

    public: static void init();

private: AllBinaryVibration();

    public: void vibrate(int32_t duration, int32_t type, int32_t volume);

};

            


        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H
