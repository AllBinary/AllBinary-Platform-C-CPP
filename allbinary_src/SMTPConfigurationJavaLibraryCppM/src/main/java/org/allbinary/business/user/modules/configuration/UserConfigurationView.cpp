
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/time/created/TimeCreatedView.h>

      
#include <org/allbinary/business/time/modified/TimeLastModifiedView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserConfigurationInterface.h"
#include "UserConfiguration.h"
#include "UserConfigurationData.h"

class UserConfigurationView
            : public Object
        : public DomNodeInterface {

    private: UserConfigurationInterface userConfigurationInterface;

public: UserConfigurationView(Node node){
this->userConfigurationInterface= UserConfiguration();
    

    NodeList childNodeList = node.getChildNodes();;
    

    Node emailConfigurationNode = DomSearchHelper::getNode(UserEmailConfigurationData::NAME, childNodeList);;
    

    UserEmailConfigurationView userEmailConfigurationView = UserEmailConfigurationView(emailConfigurationNode);;
    

    UserEmailConfigurationInterface userEmailConfigurationInterface = userEmailConfigurationView.getEmailConfigurationInterface();;
    
this->userConfigurationInterface.setUserEmailConfigurationInterface(userEmailConfigurationInterface);
    

    Node timeCreatedNode = DomSearchHelper::getNode(EntryData::getInstance().TIMECREATED, childNodeList);;
    

    TimeCreatedView timeCreatedView = TimeCreatedView(timeCreatedNode);;
    
this->userConfigurationInterface.setTimeCreated(timeCreatedView.getTimeCreated());
    

    Node timeLastModifiedNode = DomSearchHelper::getNode(EntryData::getInstance().LASTMODIFIED, childNodeList);;
    

    TimeLastModifiedView timeLastModifiedView = TimeLastModifiedView(timeLastModifiedNode);;
    
this->userConfigurationInterface.setTimeLastModified(timeLastModifiedView.getTimeLastModified());
    
}


public: UserConfigurationView(UserConfigurationInterface userConfigurationInterface){
this->userConfigurationInterface= userConfigurationInterface;
    
}


    public: UserConfigurationInterface getUserConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(UserConfigurationData::NAME);;
    

    UserEmailConfigurationView userEmailConfigurationView = UserEmailConfigurationView(this->userConfigurationInterface.getUserEmailConfigurationInterface());;
    
node.appendChild(userEmailConfigurationView.toXmlNode(document));
    

    TimeCreatedView timeCreatedView = TimeCreatedView(this->userConfigurationInterface.getTimeCreated());;
    
node.appendChild(timeCreatedView.toXmlNode(document));
    

    TimeLastModifiedView timeLastModifiedView = TimeLastModifiedView(this->userConfigurationInterface.getTimeLastModified());;
    
node.appendChild(timeLastModifiedView.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

