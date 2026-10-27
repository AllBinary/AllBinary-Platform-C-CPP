
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/NamedInterface.h"
#include "org/allbinary/layer/PositionInterface.h"

class LayerInterface: public NamedInterface, public PaintableInterface, public GroupInterfaceCompositeInterface, public PositionInterface {

    public: virtual int32_t getHeight() = 0;

    public: virtual int32_t getWidth() = 0;

    public: virtual int32_t getHalfHeight() = 0;

    public: virtual int32_t getHalfWidth() = 0;

    public: virtual int32_t getXP() = 0;

    public: virtual int32_t getYP() = 0;

    public: virtual int32_t getZP() = 0;

    public: virtual int32_t getX2() = 0;

    public: virtual int32_t getY2() = 0;

    public: virtual int32_t getZ2() = 0;

    public: virtual bool isVisible() = 0;

    public: virtual void moveDXYZ(int32_t dx, int32_t dy, int32_t dz) = 0;

    public: virtual void setVisible(bool visible) = 0;

    public: virtual bool implmentsTickableInterface() = 0;

    public: virtual bool implmentsCollidableInterface() = 0;

    public: virtual bool implmentsGameInputInterface() = 0;

    public: virtual bool implmentsArtificialIntelligenceCompositeInterface() = 0;

    public: virtual int32_t getType() = 0;

};

            

