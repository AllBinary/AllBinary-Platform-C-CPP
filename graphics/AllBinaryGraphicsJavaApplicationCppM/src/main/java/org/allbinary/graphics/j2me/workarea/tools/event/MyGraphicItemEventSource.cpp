
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MyGraphicItemEventSource::MyGraphicItemEventSource(std::string command, MutableTreeNode* treeNode){
this->command= command;
    
this->treeNode= treeNode;
    
}


MyGraphicItemEventSource::MyGraphicItemEventSource(std::string command, double angle, MutableTreeNode* treeNode){
this->command= command;
    
this->treeNode= treeNode;
    
this->setAngle(angle);
    
}


    auto MyGraphicItemEventSource::getCommand() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->command;
    
}


    auto MyGraphicItemEventSource::getTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->treeNode;
    
}


    auto MyGraphicItemEventSource::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angle;
    
}


    auto MyGraphicItemEventSource::setAngle(double angle) -> void{
this->angle= angle;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_CPP
