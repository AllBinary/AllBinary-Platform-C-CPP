
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
        



        #ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_CPP
        #define ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/AllBinaryVibration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/content/Context.h>

      
#include <android/os/Vibrator.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/AllBinaryVibrationME.h"
#include "org/allbinary/media/AllBinaryNoVibration.h"

AllBinaryVibrationME* AllBinaryVibration::VIBRATION = AllBinaryNoVibration::NO_VIBRATION;

AllBinaryVibration::AllBinaryVibration() : vibrator(dynamic_cast<Vibrator*>(ResourceUtil::getInstance()->getContext()->getSystemService(Context::VIBRATOR_SERVICE) as unknown)){
}


    auto AllBinaryVibration::getInstance() -> AllBinaryVibrationME*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryVibration::VIBRATION;
    
}


    auto AllBinaryVibration::init() -> void{

                        if(JavaBoxes::value<int32_t>(GameConfigurationCentral::getInstance()->VIBRATION->getValue()) == 0)
                        
                                    {
                                    AllBinaryVibration::VIBRATION= AllBinaryNoVibration::NO_VIBRATION;
    

                                    }
                                
                        else {
                            AllBinaryVibration::VIBRATION= new AllBinaryVibration();
    

                        }
                            
}


    auto AllBinaryVibration::vibrate(int32_t duration, int32_t type, int32_t volume) -> void{
this->vibrator->vibrate(duration);
    
}




        #endif //ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_CPP
