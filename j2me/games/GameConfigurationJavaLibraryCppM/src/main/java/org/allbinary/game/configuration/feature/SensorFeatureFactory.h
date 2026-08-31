
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SensorFeature.h"

class SensorFeatureFactory
            : public Object
         {
        

    private: static const instance: SensorFeatureFactory = new SensorFeatureFactory();

    public static SensorFeatureFactory getInstance();

private constructor ();

    public const NO_ORIENTATION: SensorFeature = new SensorFeature("No Orientation");

    public const ORIENTATION_SENSORS: SensorFeature = new SensorFeature("Orientation Sensors");

    public const SIMULATED_ORIENTATION_SENSORS: SensorFeature = new SensorFeature("Simulated Orientation Sensors");

    public const YAW: SensorFeature = new SensorFeature("Yaw");

    public const YAW_MINUS_RIGHT_PLUS_LEFT: SensorFeature = new SensorFeature("Yaw -Right +Left");

    public const YAW_MINUS_LEFT_PLUS_RIGHT: SensorFeature = new SensorFeature("Yaw -Left +Right ");

    public const PITCH: SensorFeature = new SensorFeature("Pitch");

    public const ROLL: SensorFeature = new SensorFeature("Roll");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H
