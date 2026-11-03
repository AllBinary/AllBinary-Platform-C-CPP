
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationView.h"
        

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

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfiguration.h"
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationData.h"
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationMapping.h"


FtpConfigurationView::FtpConfigurationView(Node* node){
this->setFtpConfigurationInterface(dynamic_cast<FtpConfigurationInterface*>(new FtpConfiguration()));
    

    NodeList* chileNodeList = node->getChildNodes();;
    

    std::string server = DomNodeHelper::getTextNodeValue(FtpConfigurationData::SERVER, chileNodeList);;
    
this->getFtpConfigurationInterface()->setServer(server);
    

    std::string userName = DomNodeHelper::getTextNodeValue(FtpConfigurationData::USERNAME, chileNodeList);;
    
this->getFtpConfigurationInterface()->setUserName(userName);
    

    std::string password = DomNodeHelper::getTextNodeValue(FtpConfigurationData::PASSWORD, chileNodeList);;
    
this->getFtpConfigurationInterface()->setPassword(password);
    

    std::string path = DomNodeHelper::getTextNodeValue(FtpConfigurationData::PATH, chileNodeList);;
    
this->getFtpConfigurationInterface()->setPath(path);
    
}


FtpConfigurationView::FtpConfigurationView(FtpConfigurationInterface* ftpConfigurationInterface){
this->setFtpConfigurationInterface(ftpConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto FtpConfigurationView::toXmlNode(Document* document) -> Node*{

    FtpConfigurationMapping* ftpConfigurationMapping = new FtpConfigurationMapping(this->getFtpConfigurationInterface());;
    

    HashMap<Object*, Object*>* hashMap = ftpConfigurationMapping->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, FtpConfigurationData::NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto FtpConfigurationView::getFtpConfigurationInterface() -> FtpConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ftpConfigurationInterface;
    
}


    auto FtpConfigurationView::setFtpConfigurationInterface(FtpConfigurationInterface* ftpConfigurationInterface) -> void{
this->ftpConfigurationInterface= ftpConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONVIEW_CPP
