
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Feature.h"

class MainFeatureFactory
            : public Object
         {
        

    private: static const instance: MainFeatureFactory = new MainFeatureFactory();

    public static MainFeatureFactory getInstance();

    public const FULL_SCREEN: Feature = new Feature("Full Screen");

    public const TITLE_BAR: Feature = new Feature("Title Bar");

    public const STATIC: Feature = new Feature("Static Dependent Feature");

    public const LOAD_ONDEMAND: Feature = new Feature("Load OnDemand");

    public const LOAD_ALL: Feature = new Feature("Load All");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
