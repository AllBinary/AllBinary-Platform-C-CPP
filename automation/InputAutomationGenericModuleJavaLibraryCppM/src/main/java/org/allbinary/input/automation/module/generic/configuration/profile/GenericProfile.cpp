
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileData.h"


GenericProfile::GenericProfile(Node* node) : logUtil(LogUtil::getInstance()){
this->setName(DomNodeHelper::getTextNodeValue(node));
    
this->vector= new BasicArrayListD();
    

    NodeList* nodeList = node->getChildNodes();;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Name: ") +JavaString::valueOf(this->getName())) +JavaString::valueOf(" Child Nodes: ")) +JavaString::valueOf(nodeList->getLength()), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* profileNode = nodeList->item(index);;
    

                        if(profileNode->getNodeName()->compareTo(GenericProfileDataWorkerData::NAME) == 0)
                        
                                    {
                                    
    GenericProfileDataWorkerType* genericProfileDataWorkerType = GenericProfileDataWorkerType::getInstance(profileNode);;
    
this->logUtil->putF(JavaString::valueOf("Adding GenericProfileDataWorkerType: ") +JavaString::valueOf(genericProfileDataWorkerType->toString()), this, "Contructor");
    
this->vector->add(genericProfileDataWorkerType);
    

                                    }
                                
}

}


GenericProfile::GenericProfile(std::string name) : logUtil(LogUtil::getInstance()){
this->setName(name);
    
this->vector= new BasicArrayListD();
    
}


    auto GenericProfile::getGenericProfileDataWorkerTypeVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vector;
    
}


    auto GenericProfile::add(GenericProfileDataWorkerType* genericProfileDataWorkerType) -> void{

                        if(!this->vector->contains(genericProfileDataWorkerType))
                        this->vector->add(genericProfileDataWorkerType);
                                
}


    auto GenericProfile::remove(GenericProfileDataWorkerType* genericProfileDataWorkerType) -> void{
this->vector->remove(genericProfileDataWorkerType);
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfile::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createTextNode(document, GenericProfileData::NAME, this->name);;
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType* genericProfileDataWorkerType = dynamic_cast<GenericProfileDataWorkerType*>(this->vector->get(index));;
    
node->appendChild(genericProfileDataWorkerType->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    auto GenericProfile::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto GenericProfile::setName(std::string name) -> void{
this->name= name;
    
}


    auto GenericProfile::getGenericProfileActions() -> GenericProfileActions*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActions;
    
}


    auto GenericProfile::setGenericProfileActions(GenericProfileActions* genericProfileActions) -> void{
this->genericProfileActions= genericProfileActions;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_CPP
