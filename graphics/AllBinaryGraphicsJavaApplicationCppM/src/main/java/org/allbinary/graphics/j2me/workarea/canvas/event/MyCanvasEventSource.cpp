
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MyCanvasEventSource::MyCanvasEventSource(std::string command, MutableTreeNode* treeNode){
this->command= command;
    
this->treeNode= treeNode;
    
}


MyCanvasEventSource::MyCanvasEventSource(std::string command, double angle, MutableTreeNode* treeNode){
this->command= command;
    
this->treeNode= treeNode;
    
this->setAngle(angle);
    
}


    auto MyCanvasEventSource::getCommand() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->command;
    
}


    auto MyCanvasEventSource::getTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->treeNode;
    
}


    auto MyCanvasEventSource::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angle;
    
}


    auto MyCanvasEventSource::setAngle(double angle) -> void{
this->angle= angle;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_CPP
