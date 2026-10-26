
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/ImageItem.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/game/layer/item/RTSLayerTextAnimation.h>

      
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/waypoint/FlagGameResources.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/CustomItemUtil.h>

      
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitItemArrayFactory
            : public Object
        : public ItemArraySingletonFactoryInterface {

    private: static const std::vector<ABCustomItem> ITEMS = CustomItemUtil::getInstance().CUSTOM_ITEM_ARRAY;

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: BasicColor basicColor = BasicColorFactory::getInstance().WHITE;

    private: std::vector<BasicGameResources> resources;

protected: UnitItemArrayFactory(std::vector<BasicGameResources> resources);

                //@Throws(Exception.constructor)
            
    protected: ABCustomItem createFlagItem(FlagGameResources flagResources, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    protected: ABCustomItem createNamedFlagItem(FlagGameResources flagResources, std::string name, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: std::vector<ABCustomItem> getItems();

    public: std::vector<BasicGameResources> getResources();

    public: int32_t indexOf(BasicGameResources basicGameResources);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_H
