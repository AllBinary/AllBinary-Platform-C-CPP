
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationMapping.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h"


UserEmailConfigurationView::UserEmailConfigurationView(Node* node) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->userEmailConfigurationInterface= dynamic_cast<UserEmailConfigurationInterface*>(new UserEmailConfiguration());
    

    NodeList* childNodeList = node->getChildNodes();;
    

    Node* userEmailEventsConfigurationNode = DomSearchHelper::getNodeNoThrow(UserEmailEventsConfigurationData::NAME, childNodeList);;
    

    UserEmailEventsConfigurationView* userEmailEventsConfigurationView = new UserEmailEventsConfigurationView(userEmailEventsConfigurationNode);;
    
this->userEmailConfigurationInterface->setUserEmailEventsConfigurationInterface(userEmailEventsConfigurationView->getUserEmailEventsConfigurationInterface());
    
}


UserEmailConfigurationView::UserEmailConfigurationView(UserEmailConfigurationInterface* userEmailConfigurationInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->userEmailConfigurationInterface= userEmailConfigurationInterface;
    
}


    auto UserEmailConfigurationView::getEmailConfigurationInterface() -> UserEmailConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userEmailConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailConfigurationView::toXmlNode(Document* document) -> Node*{

    UserEmailConfigurationMapping* emailConfigurationMapping = new UserEmailConfigurationMapping(this->userEmailConfigurationInterface);;
    

    HashMap<Object*, Object*>* hashMap = emailConfigurationMapping->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, UserEmailConfigurationData::NAME, hashMap);;
    

    UserEmailConfigurationInterface* userEmailConfigurationInterface = this->getEmailConfigurationInterface();;
    

    UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface = userEmailConfigurationInterface->getUserEmailEventsConfigurationInterface();;
    

    UserEmailEventsConfigurationView* userEmailEventsConfigurationView = new UserEmailEventsConfigurationView(userEmailEventsConfigurationInterface);;
    
node->appendChild(userEmailEventsConfigurationView->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_CPP
