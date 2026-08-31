
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACE_H
        #define ORG_ALLBINARY_LAYER_LAYERINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NamedInterface.h"
#include "PositionInterface.h"

class LayerInterface: public NamedInterface, public PaintableInterface, public GroupInterfaceCompositeInterface, public PositionInterface {
        

    int32_t getHeight();

    int32_t getWidth();

    int32_t getHalfHeight();

    int32_t getHalfWidth();

    int32_t getXP();

    int32_t getYP();

    int32_t getZP();

    int32_t getX2();

    int32_t getY2();

    int32_t getZ2();

    bool isVisible();

    moveDXYZ(int32_t dx, int32_t dy, int32_t dz);

    setVisible(bool visible);

    bool implmentsTickableInterface();

    bool implmentsCollidableInterface();

    bool implmentsGameInputInterface();

    bool implmentsArtificialIntelligenceCompositeInterface();

    int32_t getType();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERINTERFACE_H
