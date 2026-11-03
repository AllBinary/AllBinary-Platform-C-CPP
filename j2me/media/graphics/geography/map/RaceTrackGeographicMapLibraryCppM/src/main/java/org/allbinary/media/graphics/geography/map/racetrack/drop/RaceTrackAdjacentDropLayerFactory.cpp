
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackAdjacentDropLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RaceTrackAdjacentDropLayerFactory::DROP_LAYER_FACTORY_owner() -> RaceTrackAdjacentDropLayerFactory* { static std::unique_ptr<RaceTrackAdjacentDropLayerFactory> value(new RaceTrackAdjacentDropLayerFactory()); return value.get(); }
RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory::DROP_LAYER_FACTORY = RaceTrackAdjacentDropLayerFactory::DROP_LAYER_FACTORY_owner();

RaceTrackAdjacentDropLayerFactory::RaceTrackAdjacentDropLayerFactory() : list(new BasicArrayListD()), basicArrayListUtil(BasicArrayListUtil::getInstance()){
}


    auto RaceTrackAdjacentDropLayerFactory::clear() -> void{
this->list->clear();
    
}


    auto RaceTrackAdjacentDropLayerFactory::getInstance() -> RaceTrackAdjacentDropLayerFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RaceTrackAdjacentDropLayerFactory::DROP_LAYER_FACTORY;
    
}


    auto RaceTrackAdjacentDropLayerFactory::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


    auto RaceTrackAdjacentDropLayerFactory::getRandomInstance() -> LayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<LayerInterfaceFactoryInterface*>(this->basicArrayListUtil->getRandom(this->list));
    
}


    auto RaceTrackAdjacentDropLayerFactory::add(LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) -> void{
this->list->add(layerInterfaceFactoryInterface);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_CPP
