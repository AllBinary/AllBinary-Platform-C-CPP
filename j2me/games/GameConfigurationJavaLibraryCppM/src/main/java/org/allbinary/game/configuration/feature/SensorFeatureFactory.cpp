
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/SensorFeature.h"

class SensorFeatureFactory
            : public Object
         {

    private: static SensorFeatureFactory* instance() { static std::unique_ptr<SensorFeatureFactory> value(new SensorFeatureFactory()); return value.get(); }

    public: static SensorFeatureFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SensorFeatureFactory::instance();
    
}


private: SensorFeatureFactory(){
}


    public: SensorFeature* NO_ORIENTATION = new SensorFeature("No Orientation");

    public: SensorFeature* ORIENTATION_SENSORS = new SensorFeature("Orientation Sensors");

    public: SensorFeature* SIMULATED_ORIENTATION_SENSORS = new SensorFeature("Simulated Orientation Sensors");

    public: SensorFeature* YAW = new SensorFeature("Yaw");

    public: SensorFeature* YAW_MINUS_RIGHT_PLUS_LEFT = new SensorFeature("Yaw -Right +Left");

    public: SensorFeature* YAW_MINUS_LEFT_PLUS_RIGHT = new SensorFeature("Yaw -Left +Right ");

    public: SensorFeature* PITCH = new SensorFeature("Pitch");

    public: SensorFeature* ROLL = new SensorFeature("Roll");

};

            

