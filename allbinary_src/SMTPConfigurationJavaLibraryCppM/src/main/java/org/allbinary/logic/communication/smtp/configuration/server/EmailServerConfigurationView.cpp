
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationView.h"
        

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

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationMapping.h"


EmailServerConfigurationView::EmailServerConfigurationView(Node* node){

    NodeList* childNodeList = node->getChildNodes();;
    

    std::string server = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::SERVER, childNodeList);;
    

    std::string accountName = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::ACCOUNT, childNodeList);;
    

    std::string password = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::PASSWORD, childNodeList);;
    
this->emailServerConfigurationInterface= dynamic_cast<EmailServerConfigurationInterface*>(new EmailServerConfiguration(accountName, password, server));
    
}


EmailServerConfigurationView::EmailServerConfigurationView(EmailServerConfigurationInterface* emailServerConfigurationInterface){
this->emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


    auto EmailServerConfigurationView::getEmailConfigurationInterface() -> EmailServerConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->emailServerConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto EmailServerConfigurationView::toXmlNode(Document* document) -> Node*{

    EmailServerConfigurationMapping* emailConfigurationMapping = new EmailServerConfigurationMapping(this->emailServerConfigurationInterface);;
    

    HashMap<Object*, Object*>* hashMap = emailConfigurationMapping->toHashMap();;
    

    Node* node = ModDomHelper::createNodeWithValueNodes(document, EmailServerConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONVIEW_CPP
