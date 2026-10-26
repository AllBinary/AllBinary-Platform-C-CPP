
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

public: OnDemandLoader(OnDemandResourcesFactory onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory resourceAnimationInterfaceFactoryInterfaceFactory);

                //@Throws(Exception.constructor)
            
    public: void init(ImageCache imageCache, int32_t level, std::string loadingString);

                //@Throws(Exception.constructor)
            
    private: void initAll(ImageCache imageCache, std::string loadingString);

                //@Throws(Exception.constructor)
            
    private: void initLevel(LayerPlacementInterfaceBasicArrayListFactoryInterface layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache imageCache, int32_t level, std::string loadingString);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H
