
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationInterface.h"
#include "ContextConfiguration.h"
#include "ContextConfigurationData.h"

class ContextConfigurationView
            : public Object
        : public DomNodeInterface {

    private: ContextConfigurationInterface contextConfigurationInterface;

public: ContextConfigurationView(Node node){

    NodeList childNodeList = node.getChildNodes();;
    
this->contextConfigurationInterface= ContextConfiguration();
    

    Node emailConfigurationNode = DomSearchHelper::getNode(EmailServerConfigurationData::NAME, childNodeList);;
    

    EmailServerConfigurationView emailServerConfigurationView = EmailServerConfigurationView(emailConfigurationNode);;
    
this->contextConfigurationInterface.setEmailServerConfigurationInterface(emailServerConfigurationView.getEmailConfigurationInterface() as EmailServerConfigurationInterface);
    
}


public: ContextConfigurationView(ContextConfigurationInterface contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


    public: ContextConfigurationInterface getContextConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contextConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(ContextConfigurationData::getInstance().NAME);;
    

    EmailServerConfigurationView emailServerConfigurationView = EmailServerConfigurationView(this->getContextConfigurationInterface().getEmailServerConfigurationInterface());;
    
node.appendChild(emailServerConfigurationView.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

