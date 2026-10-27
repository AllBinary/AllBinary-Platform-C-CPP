
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SensorFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SensorFeatureFactory
            : public virtual Object
         {

    private: static SensorFeatureFactory* instance_owner();
    private: static SensorFeatureFactory* instance;

    public: static SensorFeatureFactory* getInstance();

private: SensorFeatureFactory();

    public: SensorFeature* NO_ORIENTATION;

    public: SensorFeature* ORIENTATION_SENSORS;

    public: SensorFeature* SIMULATED_ORIENTATION_SENSORS;

    public: SensorFeature* YAW;

    public: SensorFeature* YAW_MINUS_RIGHT_PLUS_LEFT;

    public: SensorFeature* YAW_MINUS_LEFT_PLUS_RIGHT;

    public: SensorFeature* PITCH;

    public: SensorFeature* ROLL;

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATUREFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/configuration/feature/SensorFeature.h")
#include "org/allbinary/game/configuration/feature/SensorFeature.h"
#endif

        #endif
    
