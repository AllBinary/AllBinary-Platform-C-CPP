
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameFeatureEvent;
class GameFeatureEventHandler;
class NullUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class GenericOperatingSystem;
class OperatingSystemFactory;
class CommonLabels;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Feature;
class GameFeatureFactory;
class InputFeatureFactory;
class SensorFeatureFactory;
class TouchFeatureFactory;
class MainFeatureFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Features
            : public virtual Object
         {

    private: static Object* SINGLETON;

    public: static Features* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: BasicArrayList* list;

    private: BasicArrayList* defaultList;

private: Features();

                //@Throws(Exception.constructor)
            
    public: void addDefault(Feature* gameFeature);

                //@Throws(Exception.constructor)
            
    public: void add(Feature* gameFeature);

                //@Throws(Exception.constructor)
            
    public: void removeDefault(Feature* gameFeature);

                //@Throws(Exception.constructor)
            
    public: void remove(Feature* gameFeature);

    private: void init();

    public: bool isDefault(Feature* gameFeature);

    public: bool isFeature(Feature* gameFeature);

                //@Throws(Exception.constructor)
            
    public: void toggle(Feature* gameFeature);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/event/GameFeatureEvent.h>)
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameFeatureEventHandler.h>)
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/configuration/feature/Feature.h")
#include "org/allbinary/game/configuration/feature/Feature.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/SensorFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/TouchFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif

        #endif
    
