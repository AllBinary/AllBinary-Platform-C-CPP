
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FtpConfigurationInterface.h"
#include "FtpConfiguration.h"
#include "FtpConfigurationData.h"
#include "FtpConfigurationMapping.h"

class FtpConfigurationView
            : public Object
        : public DomNodeInterface {
        

    private: ftpConfigurationInterface: FtpConfigurationInterface;

public constructor (Node node){

            super();
        this.setFtpConfigurationInterface(new FtpConfiguration() as FtpConfigurationInterface);
    

    chileNodeList: NodeList = node.getChildNodes()!;;
    

    server: string = DomNodeHelper.getTextNodeValue(FtpConfigurationData.SERVER, chileNodeList)!;;
    
this.getFtpConfigurationInterface()!.setServer(server);
    

    userName: string = DomNodeHelper.getTextNodeValue(FtpConfigurationData.USERNAME, chileNodeList)!;;
    
this.getFtpConfigurationInterface()!.setUserName(userName);
    

    password: string = DomNodeHelper.getTextNodeValue(FtpConfigurationData.PASSWORD, chileNodeList)!;;
    
this.getFtpConfigurationInterface()!.setPassword(password);
    

    path: string = DomNodeHelper.getTextNodeValue(FtpConfigurationData.PATH, chileNodeList)!;;
    
this.getFtpConfigurationInterface()!.setPath(path);
    
}


public constructor (FtpConfigurationInterface ftpConfigurationInterface){

            super();
        this.setFtpConfigurationInterface(ftpConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    ftpConfigurationMapping: FtpConfigurationMapping = new FtpConfigurationMapping(this.getFtpConfigurationInterface());;
    

    hashMap: HashMap<any, any> = ftpConfigurationMapping!.toHashMap()!;;
    

    node: Node = ModDomHelper.createNameValueNodes(document, FtpConfigurationData.NAME, hashMap)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public FtpConfigurationInterface getFtpConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpConfigurationInterface;
    
}


    public setFtpConfigurationInterface(FtpConfigurationInterface ftpConfigurationInterface){
this.ftpConfigurationInterface= ftpConfigurationInterface;
    
}


};

            

