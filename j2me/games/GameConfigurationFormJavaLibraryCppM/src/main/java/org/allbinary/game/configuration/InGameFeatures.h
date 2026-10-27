
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Features;
class GameFeatureChoiceGroups;
class InGameFeatureChoiceGroups;
class SensorFeatureFactory;
class TouchFeatureFactory;
#include <org/allbinary/init/Init.h>
class OrientationData;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InGameFeatures: public Init {


            
    public: InGameFeatures();
        
    public: void init();

    private: void addToInGameMenu();

    public: bool isAny();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>)
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/SensorFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/TouchFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/init/Init.h>)
#include <org/allbinary/init/Init.h>
#endif
#if __has_include(<org/allbinary/input/gyro/OrientationData.h>)
#include <org/allbinary/input/gyro/OrientationData.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
