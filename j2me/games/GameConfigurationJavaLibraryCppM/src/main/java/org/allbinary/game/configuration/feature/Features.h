
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Feature.h"
#include "GameFeatureFactory.h"
#include "InputFeatureFactory.h"
#include "SensorFeatureFactory.h"
#include "TouchFeatureFactory.h"
#include "MainFeatureFactory.h"

class Features
            : public Object
         {

    private: static Object* SINGLETON = NullUtil::getInstance().NULL_OBJECT;

    public: static Features getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: BasicArrayList list;

    private: BasicArrayList defaultList;

private: Features();

                //@Throws(Exception.constructor)
            
    public: void addDefault(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public: void add(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public: void removeDefault(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public: void remove(Feature gameFeature);

    private: void init();

    public: bool isDefault(Feature gameFeature);

    public: bool isFeature(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public: void toggle(Feature gameFeature);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
