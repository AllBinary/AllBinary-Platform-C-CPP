
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SensorFeature.h"

class SensorFeatureFactory
            : public Object
         {

    private: static SensorFeatureFactory instance() { return SensorFeatureFactory(); }

    public: static SensorFeatureFactory getInstance();

private: SensorFeatureFactory();

    public: const SensorFeature NO_ORIENTATION = SensorFeature("No Orientation");

    public: const SensorFeature ORIENTATION_SENSORS = SensorFeature("Orientation Sensors");

    public: const SensorFeature SIMULATED_ORIENTATION_SENSORS = SensorFeature("Simulated Orientation Sensors");

    public: const SensorFeature YAW = SensorFeature("Yaw");

    public: const SensorFeature YAW_MINUS_RIGHT_PLUS_LEFT = SensorFeature("Yaw -Right +Left");

    public: const SensorFeature YAW_MINUS_LEFT_PLUS_RIGHT = SensorFeature("Yaw -Left +Right ");

    public: const SensorFeature PITCH = SensorFeature("Pitch");

    public: const SensorFeature ROLL = SensorFeature("Roll");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H
