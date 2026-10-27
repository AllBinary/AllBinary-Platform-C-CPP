
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/OrientationToGameKeyEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/input/gyro/NoGyroSensor.h"


OrientationToGameKeyEvent::OrientationToGameKeyEvent(){

                        if(Features::getInstance()->isFeature(SensorFeatureFactory::getInstance()->NO_ORIENTATION))
                        
                                    {
                                    this->allBinaryGyroSensor= new NoGyroSensor();
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Such Feature");
                    

                        }
                            
}


    auto OrientationToGameKeyEvent::setAllBinaryGyroSensor(AllBinaryOrientationSensor* allBinaryGyroSensor) -> void{
this->allBinaryGyroSensor= allBinaryGyroSensor;
    
}


    auto OrientationToGameKeyEvent::getAllBinaryGyroSensor() -> AllBinaryOrientationSensor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allBinaryGyroSensor;
    
}


                //@Throws(Exception.constructor)
            
    auto OrientationToGameKeyEvent::process() -> void{
}


                //@Throws(Exception.constructor)
            
    auto OrientationToGameKeyEvent::updateGameKeyEvents(Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll) -> void{
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_CPP
