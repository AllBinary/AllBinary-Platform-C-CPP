
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/GenericProfileActionScriptProcessorData.h"


BasicProfileActionScriptProcessor::BasicProfileActionScriptProcessor(std::string label, Node* node) : ProfileActionScriptItem(label, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


BasicProfileActionScriptProcessor::BasicProfileActionScriptProcessor(std::string label) : ProfileActionScriptItem(label){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto BasicProfileActionScriptProcessor::actionPerformed(ActionEvent* actionEvent) -> void{
ProfileActionScriptItem::actionPerformed(actionEvent);
    

                        if(actionEvent->getActionCommand()->compareTo(DELETE) == 0)
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const ProfileActionScriptConditionInterface*>(this->getParent()) != nullptr)
                                    )
                        
                                    {
                                    
    ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = dynamic_cast<ProfileActionScriptConditionInterface*>(this->getParent());;
    
profileActionScriptConditionInterface->removeProcessor(dynamic_cast<ProfileActionScriptProcessorInterface*>(this));
    
JTreeInterfaceFactory::getInstance()->getJTreeInterface()->updateJTree();
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto BasicProfileActionScriptProcessor::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(GenericProfileActionScriptProcessorData::NAME);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_BASICPROFILEACTIONSCRIPTPROCESSOR_CPP
