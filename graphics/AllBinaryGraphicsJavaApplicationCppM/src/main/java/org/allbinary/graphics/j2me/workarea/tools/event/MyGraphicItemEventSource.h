
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H

            #include "java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyGraphicItemEventSource
            : public Object
         {

    private: std::string command;

    private: MutableTreeNode treeNode;

    private: double angle = 0;

public: MyGraphicItemEventSource(std::string command, MutableTreeNode treeNode);

public: MyGraphicItemEventSource(std::string command, double angle, MutableTreeNode treeNode);

    public: std::string getCommand();

    public: MutableTreeNode getTreeNode();

    public: double getAngle();

    public: void setAngle(double angle);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H
