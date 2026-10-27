
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class ImageItem;
class RTSGameStrings;
class LayerInterfaceFactoryImageItem;
class RTSLayerTextAnimation;
class BasicGameResources;
class FlagGameResources;
class ABCustomItem;
class GameFeatureImageCacheFactory;
class CommonSeps;
class Animation;
class BasicColor;
class BasicColorFactory;
class CustomItemUtil;
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>
class ImageCache;
class LayerInterfaceFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitItemArrayFactory
            : public virtual Object
        , public ItemArraySingletonFactoryInterface {

    private: static std::vector<ABCustomItem*> ITEMS;

    private: CommonSeps* commonSeps;

    private: BasicColor* basicColor;

    private: std::vector<BasicGameResources*> resources;

/*protected*/ public: UnitItemArrayFactory(std::vector<BasicGameResources*> resources);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: ABCustomItem* createFlagItem(FlagGameResources* flagResources, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: ABCustomItem* createNamedFlagItem(FlagGameResources* flagResources, std::string name, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: std::vector<ABCustomItem*> getItems();

    public: std::vector<BasicGameResources*> getResources();

    public: int32_t indexOf(BasicGameResources* basicGameResources);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/ImageItem.h>)
#include <javax/microedition/lcdui/ImageItem.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSGameStrings.h>)
#include <org/allbinary/game/layer/RTSGameStrings.h>
#endif
#if __has_include(<org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>)
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>
#endif
#if __has_include(<org/allbinary/game/layer/item/RTSLayerTextAnimation.h>)
#include <org/allbinary/game/layer/item/RTSLayerTextAnimation.h>
#endif
#if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/FlagGameResources.h>)
#include <org/allbinary/game/layer/waypoint/FlagGameResources.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/image/GameFeatureImageCacheFactory.h>)
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CustomItemUtil.h>)
#include <org/allbinary/graphics/form/item/CustomItemUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>)
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterfaceFactoryInterface.h>)
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
#endif

        #endif
    
