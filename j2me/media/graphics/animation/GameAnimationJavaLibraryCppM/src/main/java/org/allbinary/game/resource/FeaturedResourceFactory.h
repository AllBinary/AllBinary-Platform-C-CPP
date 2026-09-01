
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayList list = BasicArrayListD();

public: FeaturedResourceFactory();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string ANIMATION_FEATURES = "Animation Features: Vector: ";

    private: const std::string IMAGE_LABEL = " Image: ";

    private: const std::string IMAGE_GRAPHICS_ARRAY = "Image Array: ";

    private: const std::string IMAGE_GRAPHICS_ROTATION = "Image Rotate: ";

    private: const std::string SPRITE_QUARTER = " Sprite Quarter: ";

    private: const std::string SPRITE_FULL = " Sprite Full: ";

    private: const std::string IS_LOADING_LEVEL_LABEL = " isLoadingLevel ";

    private: const std::string IS_FEATURE = " isFeature: ";

    private: const std::string GAME_FEATURE_CONTROLLED = "GameFeatureControlledInterface: ";

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

    public: void clear();

    public: void add(GameFeatureControlledInterface featureInterface);

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H
