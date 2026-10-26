
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

    private: FtpConfigurationInterface ftpConfigurationInterface;

public: FtpConfigurationView(Node node){
this->setFtpConfigurationInterface(FtpConfiguration());
    

    NodeList chileNodeList = node.getChildNodes();;
    

    std::string server = DomNodeHelper::getTextNodeValue(FtpConfigurationData::SERVER, chileNodeList);;
    
this->getFtpConfigurationInterface().setServer(server);
    

    std::string userName = DomNodeHelper::getTextNodeValue(FtpConfigurationData::USERNAME, chileNodeList);;
    
this->getFtpConfigurationInterface().setUserName(userName);
    

    std::string password = DomNodeHelper::getTextNodeValue(FtpConfigurationData::PASSWORD, chileNodeList);;
    
this->getFtpConfigurationInterface().setPassword(password);
    

    std::string path = DomNodeHelper::getTextNodeValue(FtpConfigurationData::PATH, chileNodeList);;
    
this->getFtpConfigurationInterface().setPath(path);
    
}


public: FtpConfigurationView(FtpConfigurationInterface ftpConfigurationInterface){
this->setFtpConfigurationInterface(ftpConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    FtpConfigurationMapping ftpConfigurationMapping = FtpConfigurationMapping(this->getFtpConfigurationInterface());;
    

    HashMap<Object*, Object*> hashMap = ftpConfigurationMapping.toHashMap();;
    

    Node node = ModDomHelper::createNameValueNodes(document, FtpConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: FtpConfigurationInterface getFtpConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpConfigurationInterface;
    
}


    public: void setFtpConfigurationInterface(FtpConfigurationInterface ftpConfigurationInterface){
this->ftpConfigurationInterface= ftpConfigurationInterface;
    
}


};

            

