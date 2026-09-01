
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailServerConfigurationInterface.h"
#include "EmailServerConfigurationData.h"
#include "EmailServerConfiguration.h"
#include "EmailServerConfigurationMapping.h"

class EmailServerConfigurationView
            : public Object
        : public DomNodeInterface {

    private: EmailServerConfigurationInterface emailServerConfigurationInterface;

public: EmailServerConfigurationView(Node node){

    NodeList childNodeList = node.getChildNodes();;
    

    std::string server = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::SERVER, childNodeList);;
    

    std::string accountName = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::ACCOUNT, childNodeList);;
    

    std::string password = DomNodeHelper::getTextNodeValue(EmailServerConfigurationData::PASSWORD, childNodeList);;
    
this->emailServerConfigurationInterface= EmailServerConfiguration(accountName, password, server) as EmailServerConfigurationInterface;
    
}


public: EmailServerConfigurationView(EmailServerConfigurationInterface emailServerConfigurationInterface){
this->emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


    public: EmailServerConfigurationInterface getEmailConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->emailServerConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    EmailServerConfigurationMapping emailConfigurationMapping = EmailServerConfigurationMapping(this->emailServerConfigurationInterface);;
    

    HashMap<any, any> hashMap = emailConfigurationMapping.toHashMap();;
    

    Node node = ModDomHelper::createNodeWithValueNodes(document, EmailServerConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

