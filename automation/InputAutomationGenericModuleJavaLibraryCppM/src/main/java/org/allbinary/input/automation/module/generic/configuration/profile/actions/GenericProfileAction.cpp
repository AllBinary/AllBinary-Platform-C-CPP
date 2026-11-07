
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"


GenericProfileAction::GenericProfileAction(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) : logUtil(LogUtil::getInstance()){

    Node* actionNameNode = DomSearchHelper::getNode(GenericProfileActionData::NAME, node->getChildNodes());;
    

                        if(actionNameNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->name= DomNodeHelper::getTextNodeValue(actionNameNode);
    

                                    }
                                
                        else {
                            


                            throw Exception("Profile Action Name Node Null");
                    

                        }
                            
this->setGenericProfileActionScript(new GenericProfileActionScript(this->genericProfileActionJPanel, node));
    
}


GenericProfileAction::GenericProfileAction(std::string name) : logUtil(LogUtil::getInstance()){
this->name= name;
    
this->setGenericProfileActionScript(new GenericProfileActionScript(this->genericProfileActionJPanel));
    
}


    auto GenericProfileAction::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto GenericProfileAction::setName(std::string name) -> void{
this->name= name;
    
}


    auto GenericProfileAction::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(GenericProfileActionData::NAME, this->name);
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(JavaString::valueOf(hashMap)), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileAction::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNodeWithValueNodes(document, GenericProfileActionData::NAME, this->toHashMap());;
    
node->appendChild(getGenericProfileActionScript()->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto GenericProfileAction::getGenericProfileActionScript() -> GenericProfileActionScript*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfileActionScript;
    
}


    auto GenericProfileAction::setGenericProfileActionScript(GenericProfileActionScript* genericProfileActionScript) -> void{
this->genericProfileActionScript= genericProfileActionScript;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_CPP
