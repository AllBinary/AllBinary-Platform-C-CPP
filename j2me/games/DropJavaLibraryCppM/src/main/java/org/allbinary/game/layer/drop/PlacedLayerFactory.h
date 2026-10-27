
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H

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
        
class PlacedLayerFactory
            : public Object
         {

    private: static PlacedLayerFactory* instance() { static std::unique_ptr<PlacedLayerFactory> value(new PlacedLayerFactory()); return value.get(); }

    public: static PlacedLayerFactory* getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

private: PlacedLayerFactory();

    public: void clear();

    public: int32_t getSize();

    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: AllBinaryLayerFactoryInterface* getRandomInstance();

    public: void add(AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
