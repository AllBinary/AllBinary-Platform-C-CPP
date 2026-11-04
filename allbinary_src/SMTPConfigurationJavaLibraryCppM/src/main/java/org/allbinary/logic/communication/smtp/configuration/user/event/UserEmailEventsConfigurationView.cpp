
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationView.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationMapping.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"


UserEmailEventsConfigurationView::UserEmailEventsConfigurationView(Node* node) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->userEmailEventsConfigurationInterface= dynamic_cast<UserEmailEventsConfigurationInterface*>(new UserEmailEventsConfiguration());
    

    NodeList* childNodeList = node->getChildNodes();;
    

    BasicArrayList* emailEventConfigurationNodeVector = DomSearchHelper::getAllNodesNoThrow(UserEmailEventConfigurationData::NAME, childNodeList);;
    

    int32_t size = emailEventConfigurationNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* userEmailConfigurationNode = dynamic_cast<Node*>(emailEventConfigurationNodeVector->get(index));;
    

    UserEmailEventConfigurationView* userEmailEventConfigurationView = new UserEmailEventConfigurationView(userEmailConfigurationNode);;
    
this->userEmailEventsConfigurationInterface->addUserEmailEventConfiguration(userEmailEventConfigurationView->getUserEmailEventConfigurationInterface());
    
}

}


UserEmailEventsConfigurationView::UserEmailEventsConfigurationView(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->userEmailEventsConfigurationInterface= userEmailEventsConfigurationInterface;
    
}


    auto UserEmailEventsConfigurationView::getUserEmailEventsConfigurationInterface() -> UserEmailEventsConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userEmailEventsConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventsConfigurationView::toXmlNode(Document* document) -> Node*{

    UserEmailEventsConfigurationMapping* userEmailConfigurationMapping = new UserEmailEventsConfigurationMapping(this->userEmailEventsConfigurationInterface);;
    

    Node* node = document->createElement(UserEmailEventsConfigurationData::NAME);;
    

    HashMap<Object*, Object*>* emailEventHashMap = this->getUserEmailEventsConfigurationInterface()->getEventConfigurationHashMap();;
    

    Set* set = emailEventHashMap->keys();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Number Of Email Events Specified in file: ") +JavaString::valueOf(set->size()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    std::vector<Object*> eventNameArray = set->toArray();;
    

    int32_t size = eventNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string eventName = JavaBoxes::unbox<std::string>(eventNameArray[index]);;
    

    UserEmailEventConfigurationInterface* userEmailEventsConfigurationInterface = dynamic_cast<UserEmailEventConfigurationInterface*>(emailEventHashMap->get(eventName));;
    

    UserEmailEventConfigurationView* userEmailEventConfigurationView = new UserEmailEventConfigurationView(userEmailEventsConfigurationInterface);;
    
node->appendChild(userEmailEventConfigurationView->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_CPP
