
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationMapping.h"


UserEmailEventConfigurationView::UserEmailEventConfigurationView(Node* node){

    NodeList* childNodeList = node->getChildNodes();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string name = DomNodeHelper::getTextNodeValue(UserEmailEventConfigurationData::NAME, childNodeList);;
    
hashMap->put(UserEmailEventConfigurationData::NAME, name);
    

    std::string eventListenerClassPath = DomNodeHelper::getTextNodeValue(UserEmailEventConfigurationData::LISTENER_CLASSPATH, childNodeList);;
    
hashMap->put(UserEmailEventConfigurationData::LISTENER_CLASSPATH, eventListenerClassPath);
    
this->setUserEmailEventConfigurationInterface(dynamic_cast<UserEmailEventConfigurationInterface*>(new UserEmailEventConfiguration(hashMap)));
    
}


UserEmailEventConfigurationView::UserEmailEventConfigurationView(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface){
this->setUserEmailEventConfigurationInterface(userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventConfigurationView::toXmlNode(Document* document) -> Node*{

    UserEmailEventConfigurationMapping* userEmailEventConfigurationMapping = new UserEmailEventConfigurationMapping(this->getUserEmailEventConfigurationInterface());;
    

    HashMap<Object*, Object*>* hashMap = userEmailEventConfigurationMapping->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, UserEmailEventConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto UserEmailEventConfigurationView::getUserEmailEventConfigurationInterface() -> UserEmailEventConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userEmailEventConfigurationInterface;
    
}


    auto UserEmailEventConfigurationView::setUserEmailEventConfigurationInterface(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) -> void{
this->userEmailEventConfigurationInterface= userEmailEventConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_CPP
