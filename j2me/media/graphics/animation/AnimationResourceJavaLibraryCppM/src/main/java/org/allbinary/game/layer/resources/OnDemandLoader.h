
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BaseResourceAnimationInterfaceFactoryInterfaceFactory;
class Features;
class MainFeatureFactory;
class GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
class LayerPlacementInterfaceBasicArrayListFactoryInterface;
class ResourceLoadingLevelFactory;
class ImageCache;
class PreLogUtil;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OnDemandResourcesFactory;
class OnDemandResources;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OnDemandLoader
            : public virtual Object
         {

    private: OnDemandResourcesFactory* onDemandResourcesFactory;

    private: GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;

    private: BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory;

public: OnDemandLoader(OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory);

                //@Throws(Exception.constructor)
            
    public: void init(ImageCache* imageCache, int32_t level, std::string loadingString);

                //@Throws(Exception.constructor)
            
    private: void initAll(ImageCache* imageCache, std::string loadingString);

                //@Throws(Exception.constructor)
            
    private: void initLevel(LayerPlacementInterfaceBasicArrayListFactoryInterface* layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache* imageCache, int32_t level, std::string loadingString);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H_COMPLETE
        #if __has_include(<org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h>)
#include <org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/LayerPlacementInterfaceBasicArrayListFactoryInterface.h>)
#include <org/allbinary/game/layer/LayerPlacementInterfaceBasicArrayListFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/layer/resources/OnDemandResourcesFactory.h")
#include "org/allbinary/game/layer/resources/OnDemandResourcesFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/resources/OnDemandResources.h")
#include "org/allbinary/game/layer/resources/OnDemandResources.h"
#endif

        #endif
    
