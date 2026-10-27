
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

class UserEmailEventConfigurationView
            : public Object
        , public DomNodeInterface {

    private: UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface;

public: UserEmailEventConfigurationView(Node* node){

    NodeList* childNodeList = node->getChildNodes();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string name = DomNodeHelper::getTextNodeValue(UserEmailEventConfigurationData::NAME, childNodeList);;
    
hashMap->put(UserEmailEventConfigurationData::NAME, name);
    

    std::string eventListenerClassPath = DomNodeHelper::getTextNodeValue(UserEmailEventConfigurationData::LISTENER_CLASSPATH, childNodeList);;
    
hashMap->put(UserEmailEventConfigurationData::LISTENER_CLASSPATH, eventListenerClassPath);
    
this->setUserEmailEventConfigurationInterface(dynamic_cast<UserEmailEventConfigurationInterface*>(new UserEmailEventConfiguration(hashMap)));
    
}


public: UserEmailEventConfigurationView(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface){
this->setUserEmailEventConfigurationInterface(userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    UserEmailEventConfigurationMapping* userEmailEventConfigurationMapping = new UserEmailEventConfigurationMapping(this->getUserEmailEventConfigurationInterface());;
    

    HashMap<Object*, Object*>* hashMap = userEmailEventConfigurationMapping->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, UserEmailEventConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: UserEmailEventConfigurationInterface* getUserEmailEventConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userEmailEventConfigurationInterface;
    
}


    public: void setUserEmailEventConfigurationInterface(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface){
this->userEmailEventConfigurationInterface= userEmailEventConfigurationInterface;
    
}


};

            

