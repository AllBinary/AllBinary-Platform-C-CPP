
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventConfigurationData.h"
#include "UserEmailEventConfiguration.h"
#include "UserEmailEventConfigurationMapping.h"

class UserEmailEventConfigurationView
            : public Object
        : public DomNodeInterface {
        

    private: userEmailEventConfigurationInterface: UserEmailEventConfigurationInterface;

public constructor (Node node){

            super();
        
    childNodeList: NodeList = node.getChildNodes()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    name: string = DomNodeHelper.getTextNodeValue(UserEmailEventConfigurationData.NAME, childNodeList)!;;
    
hashMap!.put(UserEmailEventConfigurationData.NAME, name);
    

    eventListenerClassPath: string = DomNodeHelper.getTextNodeValue(UserEmailEventConfigurationData.LISTENER_CLASSPATH, childNodeList)!;;
    
hashMap!.put(UserEmailEventConfigurationData.LISTENER_CLASSPATH, eventListenerClassPath);
    
this.setUserEmailEventConfigurationInterface(new UserEmailEventConfiguration(hashMap) as UserEmailEventConfigurationInterface);
    
}


public constructor (UserEmailEventConfigurationInterface userEmailEventConfigurationInterface){

            super();
        this.setUserEmailEventConfigurationInterface(userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    userEmailEventConfigurationMapping: UserEmailEventConfigurationMapping = new UserEmailEventConfigurationMapping(this.getUserEmailEventConfigurationInterface());;
    

    hashMap: HashMap<any, any> = userEmailEventConfigurationMapping!.toHashMap()!;;
    

    node: Node = ModDomHelper.createNameValueNodes(document, UserEmailEventConfigurationData.NAME, hashMap)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public UserEmailEventConfigurationInterface getUserEmailEventConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userEmailEventConfigurationInterface;
    
}


    public setUserEmailEventConfigurationInterface(UserEmailEventConfigurationInterface userEmailEventConfigurationInterface){
this.userEmailEventConfigurationInterface= userEmailEventConfigurationInterface;
    
}


};

            

