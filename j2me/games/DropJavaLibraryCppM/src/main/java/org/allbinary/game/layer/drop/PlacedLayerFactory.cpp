
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/drop/PlacedLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PlacedLayerFactory::instance_owner() -> PlacedLayerFactory* { static std::unique_ptr<PlacedLayerFactory> value(new PlacedLayerFactory()); return value.get(); }
PlacedLayerFactory* PlacedLayerFactory::instance = PlacedLayerFactory::instance_owner();

PlacedLayerFactory::PlacedLayerFactory() : list(new BasicArrayListD()), basicArrayListUtil(BasicArrayListUtil::getInstance()){
}


    auto PlacedLayerFactory::clear() -> void{
this->list->clear();
    
}


    auto PlacedLayerFactory::getInstance() -> PlacedLayerFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PlacedLayerFactory::instance;
    
}


    auto PlacedLayerFactory::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


    auto PlacedLayerFactory::getRandomInstance() -> AllBinaryLayerFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AllBinaryLayerFactoryInterface*>(this->basicArrayListUtil->getRandom(this->list));
    
}


    auto PlacedLayerFactory::add(AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface) -> void{
this->list->add(layerInterfaceFactoryInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_CPP
