
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class NoCompleteMotionGestureInputEventListener;
class AllBinarySensor;
class NoAllBinarySensor;
class AccelerometerSensorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GyroSensorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SensorGameUpdateProcessor
            : public virtual Object
         {


            
    public: SensorGameUpdateProcessor();
        
    private: AllBinarySensor* inputSensor;

    /*protected*/ public: void setInputSensor(AllBinarySensor* inputSensor);

    public: AllBinarySensor* getInputSensor();

                //@Throws(Exception.constructor)
            
    public: void process(Object* anyType);
    public: void process(const std::string& anyType) { return process(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void process(BoxValue anyType) { return process(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void process(const std::vector<BoxElement>& anyType) { return process(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: void sendNotifications(Object* anyType);
    public: void sendNotifications(const std::string& anyType) { return sendNotifications(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void sendNotifications(BoxValue anyType) { return sendNotifications(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void sendNotifications(const std::vector<BoxElement>& anyType) { return sendNotifications(JavaBoxes::toObject(anyType)); }

    public: bool isAnySensor();

    /*protected*/ public: void setNoSensors();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>)
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>
#endif
#if __has_include(<org/allbinary/input/AllBinarySensor.h>)
#include <org/allbinary/input/AllBinarySensor.h>
#endif
#if __has_include(<org/allbinary/input/NoAllBinarySensor.h>)
#include <org/allbinary/input/NoAllBinarySensor.h>
#endif
#if __has_include(<org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>)
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>
#endif
#if __has_include("org/allbinary/input/gyro/GyroSensorFactory.h")
#include "org/allbinary/input/gyro/GyroSensorFactory.h"
#endif

        #endif
    
