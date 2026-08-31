
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
        



        #ifndef ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H
        #define ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/input/gyro/AllBinaryOrientationSensor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoAccelerometerSensor.h"

class AccelerometerSensorFactory
            : public Object
         {
        

    private: static allBinaryAccelerometerSensor: AllBinaryOrientationSensor;

                //@Throws(Exception.constructor)
            
    public static init();

    public static AllBinaryOrientationSensor getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_H
