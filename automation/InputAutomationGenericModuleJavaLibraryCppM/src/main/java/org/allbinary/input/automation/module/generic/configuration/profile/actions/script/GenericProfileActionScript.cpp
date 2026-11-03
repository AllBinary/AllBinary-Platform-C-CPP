
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GenericProfileActionScript::GenericProfileActionScript(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) : DefaultMutableTreeNode(NAME), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->setProfileActionConditionInterfaceVector(new BasicArrayListD());
    

    Node* actionScriptNode = DomSearchHelper::getNode(GenericProfileActionData::SCRIPT, node->getChildNodes());;
    

                        if(actionScriptNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionScriptNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* actionConditionNode = nodeList->item(index);;
    

                        if(actionConditionNode->getNodeType() == Node::ELEMENT_NODE)
                        
                                    {
                                    this->addCondition(ProfileActionScriptConditionFactory::getInstance(actionConditionNode));
    

                                    }
                                
}


                                    }
                                
                        else {
                            


                            throw Exception("Profile Action Script Node Null");
                    

                        }
                            
}


GenericProfileActionScript::GenericProfileActionScript(GenericProfileActionJPanel* genericProfileActionJPanel) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->setProfileActionConditionInterfaceVector(new BasicArrayListD());
    
}


    auto GenericProfileActionScript::addCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) -> void{
this->logUtil->putF(this->commonStrings->START, this, "addCondition");
    
this->getProfileActionConditionInterfaceVector()->add(profileActionScriptNodeInterface);
    
this->add(profileActionScriptNodeInterface);
    
}


    auto GenericProfileActionScript::removeCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) -> void{
this->logUtil->putF(this->commonStrings->START, this, "removeCondition");
    
this->getProfileActionConditionInterfaceVector()->remove(profileActionScriptNodeInterface);
    
this->remove(profileActionScriptNodeInterface);
    
}


    auto GenericProfileActionScript::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto GenericProfileActionScript::getProfileActionConditionInterfaceVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->profileActionConditionInterfaceVector;
    
}


    auto GenericProfileActionScript::setProfileActionConditionInterfaceVector(BasicArrayList* profileActionConditionInterfaceVector) -> void{
this->profileActionConditionInterfaceVector= profileActionConditionInterfaceVector;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActionScript::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(GenericProfileActionData::SCRIPT);;
    

    BasicArrayList* vector = this->getProfileActionConditionInterfaceVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptConditionInterface* profileActionConditionInterface = dynamic_cast<ProfileActionScriptConditionInterface*>(vector->get(index));;
    
node->appendChild(profileActionConditionInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_CPP
