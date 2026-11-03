
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
class GenericProfileActionScriptOutputData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicProfileActionScriptOutput: public BasicProfileActionScriptProcessor, public virtual ProfileActionScriptOutputInterface {

public: BasicProfileActionScriptOutput(std::string label, Node* node);

public: BasicProfileActionScriptOutput(std::string label);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUT_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h"
#endif

        #endif
    
