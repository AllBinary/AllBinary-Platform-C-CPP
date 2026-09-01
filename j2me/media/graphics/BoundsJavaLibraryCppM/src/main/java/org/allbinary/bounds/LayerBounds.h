
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H
        #define ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/bounds/event/BoundsChangeEvent.h>

      
#include <org/allbinary/bounds/event/BoundsChangeEventListener.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BoundsVisitorInterface.h"

class LayerBounds
            : public Object
        : public BoundsChangeEventListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: Rectangle rectangle;

protected: LayerBounds(Rectangle rectangle);

    public: Rectangle getRectangleP();

    public: void visit(BoundsVisitorInterface boundsVisitorInterface);

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onBoundsChangeEvent(BoundsChangeEvent boundsChangeEvent);

};

            


        #endif //ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H
