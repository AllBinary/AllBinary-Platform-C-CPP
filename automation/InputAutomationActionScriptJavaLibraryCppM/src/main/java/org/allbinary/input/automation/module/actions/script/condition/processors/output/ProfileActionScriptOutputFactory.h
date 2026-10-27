
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_PROFILEACTIONSCRIPTOUTPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_PROFILEACTIONSCRIPTOUTPUTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomSearchHelper;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ProfileActionScriptOutputInterface;
class ImageActionScriptOutputData;
class ImageActionScriptOutput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfileActionScriptOutputFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptOutputInterface* getInstance(Node* node);

private: ProfileActionScriptOutputFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_PROFILEACTIONSCRIPTOUTPUTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_PROFILEACTIONSCRIPTOUTPUTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_PROFILEACTIONSCRIPTOUTPUTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h"
#endif

        #endif
    
