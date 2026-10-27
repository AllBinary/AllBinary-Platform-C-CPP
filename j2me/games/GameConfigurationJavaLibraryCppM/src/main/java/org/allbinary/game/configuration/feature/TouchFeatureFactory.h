
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchFeatureFactory
            : public virtual Object
         {

    private: static TouchFeatureFactory* instance_owner();
    private: static TouchFeatureFactory* instance;

    public: static TouchFeatureFactory* getInstance();

private: TouchFeatureFactory();

    public: TouchFeature* TOUCH_ENABLED;

    public: TouchFeature* SHOW_SCREEN_BUTTONS;

    public: TouchFeature* AUTO_HIDE_SHOW_SCREEN_BUTTONS;

    public: TouchFeature* HIDE_SCREEN_BUTTONS;

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_TOUCHFEATUREFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/configuration/feature/TouchFeature.h")
#include "org/allbinary/game/configuration/feature/TouchFeature.h"
#endif

        #endif
    
