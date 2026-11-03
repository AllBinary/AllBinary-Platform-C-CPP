
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt/event/ActionEvent.h>
class JTreeInterfaceFactory;
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>
class ProfileActionScriptConditionInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"
class GenericProfileActionScriptProcessorData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicProfileActionScriptProcessor: public ProfileActionScriptItem, public virtual ProfileActionScriptProcessorInterface {

public: BasicProfileActionScriptProcessor(std::string label, Node* node);

public: BasicProfileActionScriptProcessor(std::string label);

    public: void actionPerformed(ActionEvent* actionEvent);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_H_COMPLETE
        #if __has_include(<java/awt/event/ActionEvent.h>)
#include <java/awt/event/ActionEvent.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>)
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>)
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/GenericProfileActionScriptProcessorData.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/GenericProfileActionScriptProcessorData.h"
#endif

        #endif
    
