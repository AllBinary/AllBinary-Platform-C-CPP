
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Features;
class GameFeatureControlledInterface;
class GraphicsFeatureFactory;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonSeps;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ResourceLoadingLevelFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FeaturedResourceFactory
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* list;

public: FeaturedResourceFactory();

    private: CommonStrings* commonStrings;

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

    public: void add(GameFeatureControlledInterface* featureInterface);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
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
#if __has_include("org/allbinary/game/resource/ResourceLoadingLevelFactory.h")
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#endif

        #endif
    
