
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceLoadingLevelFactory.h"

class FeaturedResourceFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const list: BasicArrayList = new BasicArrayListD();

public constructor ();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const ANIMATION_FEATURES: string = "Animation Features: Vector: ";

    private: const IMAGE_LABEL: string = " Image: ";

    private: const IMAGE_GRAPHICS_ARRAY: string = "Image Array: ";

    private: const IMAGE_GRAPHICS_ROTATION: string = "Image Rotate: ";

    private: const SPRITE_QUARTER: string = " Sprite Quarter: ";

    private: const SPRITE_FULL: string = " Sprite Full: ";

    private: const IS_LOADING_LEVEL_LABEL: string = " isLoadingLevel ";

    private: const IS_FEATURE: string = " isFeature: ";

    private: const GAME_FEATURE_CONTROLLED: string = "GameFeatureControlledInterface: ";

                //@Throws(Exception.constructor)
            
    public init(int32_t level);

    public clear();

    public add(GameFeatureControlledInterface featureInterface);

    public BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
