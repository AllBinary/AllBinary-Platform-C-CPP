
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/layer/LayerPlacementInterfaceBasicArrayListFactoryInterface.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OnDemandResourcesFactory.h"
#include "OnDemandResources.h"

class OnDemandLoader
            : public Object
         {

    private: OnDemandResourcesFactory onDemandResourcesFactory;

    private: GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;

    private: BaseResourceAnimationInterfaceFactoryInterfaceFactory resourceAnimationInterfaceFactoryInterfaceFactory;

public: OnDemandLoader(OnDemandResourcesFactory onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory resourceAnimationInterfaceFactoryInterfaceFactory){
this->onDemandResourcesFactory= onDemandResourcesFactory;
    
this->gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory= gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
    
this->resourceAnimationInterfaceFactoryInterfaceFactory= resourceAnimationInterfaceFactoryInterfaceFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(ImageCache imageCache, int32_t level, std::string loadingString){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(Features::getInstance().isFeature(MainFeatureFactory::getInstance().LOAD_ALL))
                        
                                    {
                                    
                        if(this->resourceAnimationInterfaceFactoryInterfaceFactory.isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->initAll(imageCache, loadingString);
    

                                    }
                                
                             else 
                        if(level != resourceLoadingLevelFactory.LOAD_ALL.getLevel())
                        
                                    {
                                    
    LayerPlacementInterfaceBasicArrayListFactoryInterface layerPlacementInterfaceBasicArrayListFactoryInterface = this->gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.getInstance(level);;
    
this->initLevel(layerPlacementInterfaceBasicArrayListFactoryInterface, imageCache, level, loadingString);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void initAll(ImageCache imageCache, std::string loadingString){

    int32_t index = 0;;
    

    int32_t portion = 120;;
    

    OnDemandResources onDemandResources;;
    




                        for (
    int32_t onDemandIndex = this->onDemandResourcesFactory.size();--onDemandIndex >= 0; )
        {
onDemandResources= this->onDemandResourcesFactory.remove(onDemandIndex);
    

                        if(onDemandResources != OnDemandResources::NULL_ON_DEMAND_RESOURCES)
                        
                                    {
                                    index= onDemandResources.initAt(imageCache, this->resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: void initLevel(LayerPlacementInterfaceBasicArrayListFactoryInterface layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache imageCache, int32_t level, std::string loadingString){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    int32_t portion = 120;;
    

    int32_t index = 0;;
    

    std::vector<int32_t> onDemandArray = layerPlacementInterfaceBasicArrayListFactoryInterface.getOnDemandResources();;
    
PreLogUtil::put(StringMaker().append(commonStrings.START).appendint(onDemandArray.size()).toString(), this, "initLevel");
    

    OnDemandResources onDemandResources;;
    




                        for (
    int32_t onDemandIndex = onDemandArray.size();--onDemandIndex >= 0; )
        {
onDemandResources= this->onDemandResourcesFactory.remove(onDemandArray[onDemandIndex]!);
    

                        if(onDemandResources != OnDemandResources::NULL_ON_DEMAND_RESOURCES)
                        
                                    {
                                    index= onDemandResources.initAt(imageCache, this->resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
    

                                    }
                                
}

}


};

            

