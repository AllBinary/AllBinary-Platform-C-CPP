
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/GyroSensorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/input/gyro/NoGyroSensor.h"


GyroSensorFactory::GyroSensorFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto GyroSensorFactory::init() -> void{
GyroSensorFactory::allBinaryGyroSensor= new NoGyroSensor();
    
}


    auto GyroSensorFactory::getInstance() -> AllBinaryOrientationSensor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GyroSensorFactory::allBinaryGyroSensor;
    
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_CPP
