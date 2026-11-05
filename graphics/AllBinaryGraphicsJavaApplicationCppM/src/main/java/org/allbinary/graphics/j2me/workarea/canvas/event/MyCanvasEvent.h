
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class MutableTreeNode;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/EventObject.h"
class MyCanvasEventSource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyCanvasEvent: public java::util::EventObject {

public: MyCanvasEvent(Object* source);
public: MyCanvasEvent(const std::string& source) : MyCanvasEvent(JavaString::box(source)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> MyCanvasEvent(BoxValue source) : MyCanvasEvent(JavaBoxes::toObject(source)) { }
public: template<typename BoxElement> MyCanvasEvent(const std::vector<BoxElement>& source) : MyCanvasEvent(JavaBoxes::toObject(source)) { }

    public: Object* getSource();

    public: std::string toString();

    public: std::string getCommand();

    public: MutableTreeNode* getTreeNode();

    public: double getAngle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_H_COMPLETE
        #if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/canvas/event/EventObject.h")
#include "org/allbinary/graphics/j2me/workarea/canvas/event/EventObject.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h")
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h"
#endif

        #endif
    
