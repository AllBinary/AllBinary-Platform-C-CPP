
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"

class CountedPickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactory, public CountedPickedUpLayerInterfaceFactoryInterface {

    public: static CountedPickedUpLayerInterfaceFactory* NULL_COUNTED_PICKUP_LAYER_FACTORY() { static std::unique_ptr<CountedPickedUpLayerInterfaceFactory> value(new CountedPickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->NONE, IconLayer::NULL_ICON_LAYER, NullAnimationFactory::getFactoryInstance()->getInstance(0))); return value.get(); }

    private: int32_t id;

public: CountedPickedUpLayerInterfaceFactory(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getNextInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z);

    public: int32_t getTotal();

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
