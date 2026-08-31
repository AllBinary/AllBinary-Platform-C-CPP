
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
        

    private: static const instance: PlacedLayerFactory = new PlacedLayerFactory();

    public static PlacedLayerFactory getInstance();

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor ();

    public clear();

    public int32_t getSize();

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    public AllBinaryLayerFactoryInterface getRandomInstance();

    public add(AllBinaryLayerFactoryInterface layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
