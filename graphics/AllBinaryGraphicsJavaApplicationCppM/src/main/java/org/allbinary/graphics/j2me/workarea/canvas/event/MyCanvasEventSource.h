
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <javax/swing/tree/MutableTreeNode.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyCanvasEventSource
            : public Object
         {

    private: std::string command;

    private: MutableTreeNode treeNode;

    private: double angle = 0;

public: MyCanvasEventSource(std::string command, MutableTreeNode treeNode);

public: MyCanvasEventSource(std::string command, double angle, MutableTreeNode treeNode);

    public: std::string getCommand();

    public: MutableTreeNode getTreeNode();

    public: double getAngle();

    public: void setAngle(double angle);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSOURCE_H
