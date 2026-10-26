
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchFeature.h"

class TouchFeatureFactory
            : public Object
         {

    private: static TouchFeatureFactory instance() { return TouchFeatureFactory(); }

    public: static TouchFeatureFactory getInstance();

private: TouchFeatureFactory();

    public: const TouchFeature TOUCH_ENABLED = TouchFeature("Touch Enabled");

    public: const TouchFeature SHOW_SCREEN_BUTTONS = TouchFeature("Show");

    public: const TouchFeature AUTO_HIDE_SHOW_SCREEN_BUTTONS = TouchFeature("Auto Hide (One Level)");

    public: const TouchFeature HIDE_SCREEN_BUTTONS = TouchFeature("Hide");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H
