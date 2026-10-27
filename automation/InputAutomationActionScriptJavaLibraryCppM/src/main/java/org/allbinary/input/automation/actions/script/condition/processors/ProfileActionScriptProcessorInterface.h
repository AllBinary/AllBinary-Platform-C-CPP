
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_PROFILEACTIONSCRIPTPROCESSORINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_PROFILEACTIONSCRIPTPROCESSORINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/swing/tree/MutableTreeNode.h>
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h>
#include <org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfileActionScriptProcessorInterface: public CustomTreeNodeInterface, public DomNodeInterface, public MutableTreeNode, public ProfileActionScriptItemInterface {

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_PROFILEACTIONSCRIPTPROCESSORINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_PROFILEACTIONSCRIPTPROCESSORINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_PROFILEACTIONSCRIPTPROCESSORINTERFACE_H_COMPLETE
        #if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h>)
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>
#endif

        #endif
    
