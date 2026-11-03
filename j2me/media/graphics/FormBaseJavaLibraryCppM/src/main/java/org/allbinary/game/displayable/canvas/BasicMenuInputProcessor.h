
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class NullCanvas;
#include <org/allbinary/game/input/PlayerGameInput.h>
class MyCanvas;
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>
class MotionGestureEvent;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicMenuInputProcessor: public PlayerGameInput, public virtual BaseMotionGestureEventListener {

    public: BasicArrayList* motionGestureEventList;

    private: Canvas* canvas;

/*protected*/ public: BasicMenuInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas);

    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    private: void setCanvas(MyCanvas* canvas);

    /*protected*/ public: MyCanvas* getCanvas();

                //@Throws(Exception.constructor)
            
    public: int32_t processInputList();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInput.h>)
#include <org/allbinary/game/input/PlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>)
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
