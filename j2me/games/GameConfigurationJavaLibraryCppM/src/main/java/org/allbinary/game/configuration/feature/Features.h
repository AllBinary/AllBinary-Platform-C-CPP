
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
        

    private: static SINGLETON: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static Features getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const list: BasicArrayList;

    private: const defaultList: BasicArrayList;

private constructor ();

                //@Throws(Exception.constructor)
            
    public addDefault(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public add(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public removeDefault(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public remove(Feature gameFeature);

    init();

    public bool isDefault(Feature gameFeature);

    public bool isFeature(Feature gameFeature);

                //@Throws(Exception.constructor)
            
    public toggle(Feature gameFeature);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
