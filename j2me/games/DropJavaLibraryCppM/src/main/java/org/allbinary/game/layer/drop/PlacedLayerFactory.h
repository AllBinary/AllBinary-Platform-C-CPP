
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlacedLayerFactory
            : public Object
         {

    private: static PlacedLayerFactory instance() { return PlacedLayerFactory(); }

    public: static PlacedLayerFactory getInstance();

    private: const BasicArrayList list = BasicArrayListD();

private: PlacedLayerFactory();

    public: void clear();

    public: int32_t getSize();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: AllBinaryLayerFactoryInterface getRandomInstance();

    public: void add(AllBinaryLayerFactoryInterface layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
