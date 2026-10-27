
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DropLayerFactory
            : public Object
         {

    private: static DropLayerFactory* DROP_LAYER_FACTORY() { static std::unique_ptr<DropLayerFactory> value(new DropLayerFactory()); return value.get(); }

    public: static DropLayerFactory* getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

private: DropLayerFactory();

    public: void clear();

    public: int32_t getSize();

    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: PickedUpLayerInterfaceFactoryInterface* getRandomInstance();

    public: void add(PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H
