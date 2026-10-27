
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H
        #define ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/input/NoAllBinarySensor.h>

      
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/GyroSensorFactory.h"

class SensorGameUpdateProcessor
            : public Object
         {

    private: AllBinarySensor* inputSensor;

    protected: void setInputSensor(AllBinarySensor* inputSensor);

    public: AllBinarySensor* getInputSensor();

                //@Throws(Exception.constructor)
            
    public: void process(Object* anyType);

                //@Throws(Exception.constructor)
            
    public: void sendNotifications(Object* anyType);

    public: bool isAnySensor();

    protected: void setNoSensors();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H
