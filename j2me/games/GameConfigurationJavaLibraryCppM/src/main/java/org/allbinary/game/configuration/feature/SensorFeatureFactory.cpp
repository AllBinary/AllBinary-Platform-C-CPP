
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/SensorFeature.h"

auto SensorFeatureFactory::instance_owner() -> SensorFeatureFactory* { static std::unique_ptr<SensorFeatureFactory> value(new SensorFeatureFactory()); return value.get(); }
SensorFeatureFactory* SensorFeatureFactory::instance = SensorFeatureFactory::instance_owner();

    auto SensorFeatureFactory::getInstance() -> SensorFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SensorFeatureFactory::instance;
    
}


SensorFeatureFactory::SensorFeatureFactory() : NO_ORIENTATION(new SensorFeature("No Orientation")), ORIENTATION_SENSORS(new SensorFeature("Orientation Sensors")), SIMULATED_ORIENTATION_SENSORS(new SensorFeature("Simulated Orientation Sensors")), YAW(new SensorFeature("Yaw")), YAW_MINUS_RIGHT_PLUS_LEFT(new SensorFeature("Yaw -Right +Left")), YAW_MINUS_LEFT_PLUS_RIGHT(new SensorFeature("Yaw -Left +Right ")), PITCH(new SensorFeature("Pitch")), ROLL(new SensorFeature("Roll")){
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_CPP
