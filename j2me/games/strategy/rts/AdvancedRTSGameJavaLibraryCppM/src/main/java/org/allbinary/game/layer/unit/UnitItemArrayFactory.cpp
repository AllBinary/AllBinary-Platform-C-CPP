
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const ITEMS: std::vector<ABCustomItem> = CustomItemUtil.getInstance()!.CUSTOM_ITEM_ARRAY;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    private: const resources: std::vector<BasicGameResources>;

protected constructor (std::vector<BasicGameResources> resources){

            super();
        this.resources= resources;
    
}


                //@Throws(Exception.constructor)
            
    ABCustomItem createFlagItem(FlagGameResources flagResources, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface){

    name: string = flagResources!.NAME;;
    

    index: int32_t = name.indexOf(this.commonSeps!.SPACE)!;;
    

                        if(index >= 0)
                        
                                    {
                                    name= name.substring(index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createNamedFlagItem(flagResources, name, layerInterfaceFactoryInterface);;
    
}


                //@Throws(Exception.constructor)
            
    ABCustomItem createNamedFlagItem(FlagGameResources flagResources, string name, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface){

    IMAGE_CACHE: ImageCache = GameFeatureImageCacheFactory.getInstance()!;;
    

    image: Image = IMAGE_CACHE.getWithKey(flagResources!.RESOURCE_ICON)!;;
    

    item: ABCustomItem = new LayerInterfaceFactoryImageItem(name, image, ImageItem.LAYOUT_DEFAULT, flagResources!.NAME, this.basicColor, 
                                                [
                                                    new RTSLayerTextAnimation(RTSGameStrings.getInstance()!.DRAGGABLE, image)
                                                ], layerInterfaceFactoryInterface);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return item;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<ABCustomItem> getItems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitItemArrayFactory.ITEMS;
    
}


    public std::vector<BasicGameResources> getResources(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.resources;
    
}


    public int32_t indexOf(BasicGameResources basicGameResources){




                        for (
    index: int32_t = this.resources.length -1;index >= 0; index--)
        {

                        if(this.resources[index] == basicGameResources)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

