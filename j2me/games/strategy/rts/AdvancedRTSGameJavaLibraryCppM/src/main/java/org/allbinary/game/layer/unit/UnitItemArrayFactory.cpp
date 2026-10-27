
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/UnitItemArrayFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        
std::vector<ABCustomItem*> UnitItemArrayFactory::ITEMS = CustomItemUtil::getInstance()->CUSTOM_ITEM_ARRAY;

UnitItemArrayFactory::UnitItemArrayFactory(std::vector<BasicGameResources*> resources) : commonSeps(CommonSeps::getInstance()), basicColor(BasicColorFactory::getInstance()->WHITE){
this->resources= resources;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitItemArrayFactory::createFlagItem(FlagGameResources* flagResources, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) -> ABCustomItem*{

    std::string name = flagResources->NAME;;
    

    int32_t index = JavaString::indexOf(name, this->commonSeps->SPACE);;
    

                        if(index >= 0)
                        
                                    {
                                    name= JavaString::substring(name, index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createNamedFlagItem(flagResources, name, layerInterfaceFactoryInterface);;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitItemArrayFactory::createNamedFlagItem(FlagGameResources* flagResources, std::string name, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) -> ABCustomItem*{

    ImageCache* IMAGE_CACHE = GameFeatureImageCacheFactory::getInstance();;
    

    Image* image = IMAGE_CACHE->getWithKey(flagResources->RESOURCE_ICON);;
    

    ABCustomItem* item = new LayerInterfaceFactoryImageItem(name, image, ImageItem::LAYOUT_DEFAULT, flagResources->NAME, this->basicColor, 
                                                {
                                                    new RTSLayerTextAnimation(RTSGameStrings::getInstance()->DRAGGABLE, image)
                                                }, layerInterfaceFactoryInterface);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return item;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitItemArrayFactory::getItems() -> std::vector<ABCustomItem*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitItemArrayFactory::ITEMS;
    
}


    auto UnitItemArrayFactory::getResources() -> std::vector<BasicGameResources*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resources;
    
}


    auto UnitItemArrayFactory::indexOf(BasicGameResources* basicGameResources) -> int32_t{




                        for (
    int32_t index = this->resources.size() -1;index >= 0; index--)
        {

                        if(this->resources[index] == basicGameResources)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITITEMARRAYFACTORY_CPP
