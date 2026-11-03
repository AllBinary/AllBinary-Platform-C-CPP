
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h"


ProfileActionScriptInputFactory::ProfileActionScriptInputFactory(){
}


                //@Throws(Exception.constructor)
            
    auto ProfileActionScriptInputFactory::getInstance(Node* node) -> ProfileActionScriptInputInterface*{

    ProfileActionScriptInputInterface* profileActionScriptInputInterface = 
                null
            ;;
    

                        if(DomSearchHelper::getNodeNoThrow(KeyboardActionScriptInputData::NAME, node->getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptInputInterface= new KeyboardActionScriptInput(node);
    

                                    }
                                
                             else 
                        if(DomSearchHelper::getNodeNoThrow(MouseActionScriptInputData::NAME, node->getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptInputInterface= new MouseActionScriptInput(node);
    

                                    }
                                
                        else {
                            


                            throw Exception("No Such ActionScript Input");
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return profileActionScriptInputInterface;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_CPP
