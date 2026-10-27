
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class MutableTreeNode;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyGraphicItemEventSource
            : public virtual Object
         {

    private: std::string command;

    private: MutableTreeNode* treeNode;

    private: double angle = 0;

public: MyGraphicItemEventSource(std::string command, MutableTreeNode* treeNode);

public: MyGraphicItemEventSource(std::string command, double angle, MutableTreeNode* treeNode);

    public: std::string getCommand();

    public: MutableTreeNode* getTreeNode();

    public: double getAngle();

    public: void setAngle(double angle);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSOURCE_H_COMPLETE
        #if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif

        #endif
    
