
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/input/gyro/AllBinaryOrientationSensor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/accelerometer/NoAccelerometerSensor.h"

class AccelerometerSensorFactory
            : public Object
         {

    private: static inline AllBinaryOrientationSensor* allBinaryAccelerometerSensor;

                //@Throws(Exception.constructor)
            
    public: static void init(){

    Features* features = Features::getInstance();;
    

    SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

                        if(features->isFeature(sensorFeatureFactory->ORIENTATION_SENSORS))
                        
                                    {
                                    


                            throw new Exception("No Orientation Sensors");
                    

                                    }
                                
                             else 
                        if(features->isFeature(sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    


                            throw new Exception("No Simulation Sensors");
                    

                                    }
                                
                             else 
                        if(features->isFeature(sensorFeatureFactory->NO_ORIENTATION))
                        
                                    {
                                    AccelerometerSensorFactory::allBinaryAccelerometerSensor= new NoAccelerometerSensor();
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Such SensorFeature");
                    

                        }
                            
}


    public: static AllBinaryOrientationSensor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AccelerometerSensorFactory::allBinaryAccelerometerSensor;
    
}


};

            

