
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUTNODE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUTNODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutputNode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h"


BasicProfileActionScriptOutputNode::BasicProfileActionScriptOutputNode(Node* node){

    Node* actionNode = DomSearchHelper::getNode(GenericProfileActionScriptOutputData::NAME, node->getChildNodes());;
    
}


BasicProfileActionScriptOutputNode::BasicProfileActionScriptOutputNode(){
}


                //@Throws(Exception.constructor)
            
    auto BasicProfileActionScriptOutputNode::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(GenericProfileActionScriptOutputData::NAME);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_BASICPROFILEACTIONSCRIPTOUTPUTNODE_CPP
