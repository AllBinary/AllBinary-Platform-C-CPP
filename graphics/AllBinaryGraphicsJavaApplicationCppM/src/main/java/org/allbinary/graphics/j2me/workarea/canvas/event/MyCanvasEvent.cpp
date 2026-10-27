
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/EventObject.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h"


MyCanvasEvent::MyCanvasEvent(Object* source) : java::util::EventObject(source){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto MyCanvasEvent::getSource() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return java::util::EventObject::getSource();;
    
}


    auto MyCanvasEvent::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return java::util::EventObject::toString();;
    
}


    auto MyCanvasEvent::getCommand() -> std::string{

    MyCanvasEventSource* myEventSource = dynamic_cast<MyCanvasEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getCommand();;
    
}


    auto MyCanvasEvent::getTreeNode() -> MutableTreeNode*{

    MyCanvasEventSource* myEventSource = dynamic_cast<MyCanvasEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getTreeNode();;
    
}


    auto MyCanvasEvent::getAngle() -> double{

    MyCanvasEventSource* myEventSource = dynamic_cast<MyCanvasEventSource*>(this->getSource());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myEventSource->getAngle();;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENT_CPP
