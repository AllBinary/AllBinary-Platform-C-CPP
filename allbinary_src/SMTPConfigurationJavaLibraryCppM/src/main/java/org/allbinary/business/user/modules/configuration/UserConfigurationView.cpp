
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: userConfigurationInterface: UserConfigurationInterface;

public constructor (Node node){

            super();
        this.userConfigurationInterface= new UserConfiguration() as UserConfigurationInterface;
    

    childNodeList: NodeList = node.getChildNodes()!;;
    

    emailConfigurationNode: Node = DomSearchHelper.getNode(UserEmailConfigurationData.NAME, childNodeList)!;;
    

    userEmailConfigurationView: UserEmailConfigurationView = new UserEmailConfigurationView(emailConfigurationNode);;
    

    userEmailConfigurationInterface: UserEmailConfigurationInterface = userEmailConfigurationView!.getEmailConfigurationInterface() as UserEmailConfigurationInterface;;
    
this.userConfigurationInterface!.setUserEmailConfigurationInterface(userEmailConfigurationInterface);
    

    timeCreatedNode: Node = DomSearchHelper.getNode(EntryData.getInstance()!.TIMECREATED, childNodeList)!;;
    

    timeCreatedView: TimeCreatedView = new TimeCreatedView(timeCreatedNode);;
    
this.userConfigurationInterface!.setTimeCreated(timeCreatedView!.getTimeCreated());
    

    timeLastModifiedNode: Node = DomSearchHelper.getNode(EntryData.getInstance()!.LASTMODIFIED, childNodeList)!;;
    

    timeLastModifiedView: TimeLastModifiedView = new TimeLastModifiedView(timeLastModifiedNode);;
    
this.userConfigurationInterface!.setTimeLastModified(timeLastModifiedView!.getTimeLastModified());
    
}


public constructor (UserConfigurationInterface userConfigurationInterface){

            super();
        this.userConfigurationInterface= userConfigurationInterface;
    
}


    public UserConfigurationInterface getUserConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(UserConfigurationData.NAME)!;;
    

    userEmailConfigurationView: UserEmailConfigurationView = new UserEmailConfigurationView(this.userConfigurationInterface!.getUserEmailConfigurationInterface());;
    
node.appendChild(userEmailConfigurationView!.toXmlNode(document));
    

    timeCreatedView: TimeCreatedView = new TimeCreatedView(this.userConfigurationInterface!.getTimeCreated());;
    
node.appendChild(timeCreatedView!.toXmlNode(document));
    

    timeLastModifiedView: TimeLastModifiedView = new TimeLastModifiedView(this.userConfigurationInterface!.getTimeLastModified());;
    
node.appendChild(timeLastModifiedView!.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

