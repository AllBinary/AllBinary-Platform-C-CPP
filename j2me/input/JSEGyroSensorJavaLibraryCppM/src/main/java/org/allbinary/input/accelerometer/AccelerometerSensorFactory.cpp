
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
        



        #ifndef ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/input/gyro/AllBinaryOrientationSensor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/accelerometer/NoAccelerometerSensor.h"


AccelerometerSensorFactory::AccelerometerSensorFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto AccelerometerSensorFactory::init() -> void{

    Features* features = Features::getInstance();;
    

    SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

                        if(features->isFeature(sensorFeatureFactory->ORIENTATION_SENSORS))
                        
                                    {
                                    


                            throw Exception("No Orientation Sensors");
                    

                                    }
                                
                             else 
                        if(features->isFeature(sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    


                            throw Exception("No Simulation Sensors");
                    

                                    }
                                
                             else 
                        if(features->isFeature(sensorFeatureFactory->NO_ORIENTATION))
                        
                                    {
                                    AccelerometerSensorFactory::allBinaryAccelerometerSensor= new NoAccelerometerSensor();
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Such SensorFeature");
                    

                        }
                            
}


    auto AccelerometerSensorFactory::getInstance() -> AllBinaryOrientationSensor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AccelerometerSensorFactory::allBinaryAccelerometerSensor;
    
}




        #endif //ORG_ALLBINARY_INPUT_ACCELEROMETER_ACCELEROMETERSENSORFACTORY_CPP
