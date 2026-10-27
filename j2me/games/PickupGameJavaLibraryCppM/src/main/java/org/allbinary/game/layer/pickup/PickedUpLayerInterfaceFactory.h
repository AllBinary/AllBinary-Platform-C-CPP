
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Animation;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
class PickedUpLayerType;
class IconLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactoryBase {

    private: PickedUpLayerType* pickedUpLayerType;

    private: IconLayer* iconLayer;

    private: Animation* animationInterface;

/*protected*/ public: PickedUpLayerInterfaceFactory(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

    public: AllBinaryLayer* getIconLayer();

    public: Animation* getAnimationInterface();

    public: PickedUpLayerType* getPickedUpLayerType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerType.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/IconLayer.h")
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#endif

        #endif
    
