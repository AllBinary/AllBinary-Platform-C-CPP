
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/TouchFeature.h"

class TouchFeatureFactory
            : public Object
         {

    private: static TouchFeatureFactory* instance() { static std::unique_ptr<TouchFeatureFactory> value(new TouchFeatureFactory()); return value.get(); }

    public: static TouchFeatureFactory* getInstance();

private: TouchFeatureFactory();

    public: TouchFeature* TOUCH_ENABLED = new TouchFeature("Touch Enabled");

    public: TouchFeature* SHOW_SCREEN_BUTTONS = new TouchFeature("Show");

    public: TouchFeature* AUTO_HIDE_SHOW_SCREEN_BUTTONS = new TouchFeature("Auto Hide (One Level)");

    public: TouchFeature* HIDE_SCREEN_BUTTONS = new TouchFeature("Hide");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
