
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BoundsChangeEvent;
#include <org/allbinary/bounds/event/BoundsChangeEventListener.h>
class Rectangle;
class ForcedLogUtil;
class LogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BoundsVisitorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerBounds
            : public virtual Object
        , public BoundsChangeEventListener {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: Rectangle* rectangle;

/*protected*/ public: LayerBounds(Rectangle* rectangle);

    public: Rectangle* getRectangleP();

    public: void visit(BoundsVisitorInterface* boundsVisitorInterface);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onBoundsChangeEvent(BoundsChangeEvent* boundsChangeEvent);

};

            


        #endif //ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H_COMPLETE)
        #define ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_H_COMPLETE
        #if __has_include(<org/allbinary/bounds/event/BoundsChangeEvent.h>)
#include <org/allbinary/bounds/event/BoundsChangeEvent.h>
#endif
#if __has_include(<org/allbinary/bounds/event/BoundsChangeEventListener.h>)
#include <org/allbinary/bounds/event/BoundsChangeEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include("org/allbinary/bounds/BoundsVisitorInterface.h")
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#endif

        #endif
    
