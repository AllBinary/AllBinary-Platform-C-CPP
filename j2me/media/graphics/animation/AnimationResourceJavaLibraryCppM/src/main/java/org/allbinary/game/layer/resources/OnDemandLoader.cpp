
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
        

    private: const onDemandResourcesFactory: OnDemandResourcesFactory;

    private: const gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory: GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;

    private: const resourceAnimationInterfaceFactoryInterfaceFactory: BaseResourceAnimationInterfaceFactoryInterfaceFactory;

public constructor (OnDemandResourcesFactory onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory resourceAnimationInterfaceFactoryInterfaceFactory){

            super();
        this.onDemandResourcesFactory= onDemandResourcesFactory;
    
this.gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory= gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
    
this.resourceAnimationInterfaceFactoryInterfaceFactory= resourceAnimationInterfaceFactoryInterfaceFactory;
    
}


                //@Throws(Exception.constructor)
            
    public init(ImageCache imageCache, int32_t level, string loadingString){

    resourceLoadingLevelFactory: ResourceLoadingLevelFactory = ResourceLoadingLevelFactory.getInstance()!;;
    

                        if(Features.getInstance()!.isFeature(MainFeatureFactory.getInstance()!.LOAD_ALL))
                        
                                    {
                                    
                        if(this.resourceAnimationInterfaceFactoryInterfaceFactory!.isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.initAll(imageCache, loadingString);
    

                                    }
                                
                             else 
                        if(level != resourceLoadingLevelFactory!.LOAD_ALL.getLevel())
                        
                                    {
                                    
    layerPlacementInterfaceBasicArrayListFactoryInterface: LayerPlacementInterfaceBasicArrayListFactoryInterface = this.gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory!.getInstance(level)!;;
    
this.initLevel(layerPlacementInterfaceBasicArrayListFactoryInterface, imageCache, level, loadingString);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    initAll(ImageCache imageCache, string loadingString){

    index: int32_t = 0;;
    

    portion: int32_t = 120;;
    

    onDemandResources: OnDemandResources;;
    




                        for (
    onDemandIndex: int32_t = this.onDemandResourcesFactory!.size()!;--onDemandIndex >= 0; )
        {
onDemandResources= this.onDemandResourcesFactory!.remove(onDemandIndex);
    

                        if(onDemandResources != OnDemandResources.NULL_ON_DEMAND_RESOURCES)
                        
                                    {
                                    index= onDemandResources!.initAt(imageCache, this.resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    initLevel(LayerPlacementInterfaceBasicArrayListFactoryInterface layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache imageCache, int32_t level, string loadingString){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    portion: int32_t = 120;;
    

    index: int32_t = 0;;
    

    onDemandArray: std::vector<int32_t> = layerPlacementInterfaceBasicArrayListFactoryInterface!.getOnDemandResources()!;;
    
PreLogUtil.put(new StringMaker().append(commonStrings!.START)!.appendint(onDemandArray!.length)!.toString(), this, "initLevel");
    

    onDemandResources: OnDemandResources;;
    




                        for (
    onDemandIndex: int32_t = onDemandArray!.length
                ;--onDemandIndex >= 0; )
        {
onDemandResources= this.onDemandResourcesFactory!.remove(onDemandArray[onDemandIndex]!);
    

                        if(onDemandResources != OnDemandResources.NULL_ON_DEMAND_RESOURCES)
                        
                                    {
                                    index= onDemandResources!.initAt(imageCache, this.resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
    

                                    }
                                
}

}


};

            

