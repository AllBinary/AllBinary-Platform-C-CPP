
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_CUSTOMTREENODEINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_CUSTOMTREENODEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/swing.h>
#include <javax/swing/tree/MutableTreeNode.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JPopupMenu;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTreeNodeInterface: public virtual MutableTreeNode {

    public: virtual JPopupMenu* getJPopupMenu() = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_CUSTOMTREENODEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_CUSTOMTREENODEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_CUSTOMTREENODEINTERFACE_H_COMPLETE
        #if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JPopupMenu.h")
#include "org/allbinary/input/automation/actions/script/condition/JPopupMenu.h"
#endif

        #endif
    
