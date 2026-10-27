
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/TouchFeature.h"

auto TouchFeatureFactory::instance_owner() -> TouchFeatureFactory* { static std::unique_ptr<TouchFeatureFactory> value(new TouchFeatureFactory()); return value.get(); }
TouchFeatureFactory* TouchFeatureFactory::instance = TouchFeatureFactory::instance_owner();

    auto TouchFeatureFactory::getInstance() -> TouchFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchFeatureFactory::instance;
    
}


TouchFeatureFactory::TouchFeatureFactory() : TOUCH_ENABLED(new TouchFeature("Touch Enabled")), SHOW_SCREEN_BUTTONS(new TouchFeature("Show")), AUTO_HIDE_SHOW_SCREEN_BUTTONS(new TouchFeature("Auto Hide (One Level)")), HIDE_SCREEN_BUTTONS(new TouchFeature("Hide")){
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_CPP
