
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Feature.h"


MainFeatureFactory::MainFeatureFactory() : FULL_SCREEN(new Feature("Full Screen")), TITLE_BAR(new Feature("Title Bar")), STATIC(new Feature("Static Dependent Feature")), LOAD_ONDEMAND(new Feature("Load OnDemand")), LOAD_ALL(new Feature("Load All")) {
        }
        auto MainFeatureFactory::instance_owner() -> MainFeatureFactory* { static std::unique_ptr<MainFeatureFactory> value(new MainFeatureFactory()); return value.get(); }
MainFeatureFactory* MainFeatureFactory::instance = MainFeatureFactory::instance_owner();

    auto MainFeatureFactory::getInstance() -> MainFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MainFeatureFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_CPP
