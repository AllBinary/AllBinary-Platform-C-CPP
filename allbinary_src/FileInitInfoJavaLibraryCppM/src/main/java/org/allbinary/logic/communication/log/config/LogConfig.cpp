
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/LogConfig.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigType.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypesData.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/LogConfigData.h"


LogConfig::LogConfig(std::string aName, std::string aDescription, std::string aPath, std::string aFileName){
this->isEnabled_= false;
    
this->name= aName;
    
this->description= aDescription;
    
this->path= aPath;
    
this->fileName= aFileName;
    
}


LogConfig::LogConfig(Node* node){

    Node* enabledValueNode = DomSearchHelper::getNode(EntryData::getInstance()->ENABLE, node->getChildNodes());;
    

    std::string isEnabledString = DomNodeHelper::getTextNodeValue(enabledValueNode);;
    
this->isEnabled_= BooleanUtil::getInstance()->getFromString(isEnabledString);
    

    LogConfigData* logConfigData = LogConfigData::getInstance();;
    

    Node* nameValueNode = DomSearchHelper::getNode(logConfigData->NAME, node->getChildNodes());;
    
this->name= DomNodeHelper::getTextNodeValue(nameValueNode);
    

    Node* descriptionValueNode = DomSearchHelper::getNode(logConfigData->DESCRIPTION, node->getChildNodes());;
    
this->description= DomNodeHelper::getTextNodeValue(descriptionValueNode);
    

    Node* fileValueNode = DomSearchHelper::getNode(logConfigData->FILE, node->getChildNodes());;
    
this->fileName= DomNodeHelper::getTextNodeValue(fileValueNode);
    
}


    auto LogConfig::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto LogConfig::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isEnabled_;
    
}


    auto LogConfig::enable() -> void{
this->isEnabled_= true;
    
}


    auto LogConfig::disable() -> void{
this->isEnabled_= false;
    
}


    auto LogConfig::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->description;
    
}


    auto LogConfig::getFileName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileName;
    
}


    auto LogConfig::setName(std::string value) -> void{
this->name= value;
    
}


    auto LogConfig::setDescription(std::string value) -> void{
this->description= value;
    
}


    auto LogConfig::setPath(std::string value) -> void{
this->path= value;
    
}


    auto LogConfig::setFileName(std::string value) -> void{
this->fileName= value;
    
}


                //@Throws(Exception.constructor)
            
    auto LogConfig::getDoc() -> Document*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->INIT_PATH);
    
stringBuffer->append(this->getFileName());
    

    AbFile* file = AbFile::createAbFile(stringBuffer->toString());;
    

    Document* document = DomDocumentHelper::create(new AbFileLocalInputStream(file));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    auto LogConfig::getTypeVector() -> BasicArrayList*{

    BasicArrayList* logKeyVector = new BasicArrayListD();;
    

    Document* document = this->getDoc();;
    

    NodeList* logConfigTypesNodeList = document->getElementsByTagName(LogConfigTypesData::getInstance()->NAME);;
    

    Node* logConfigTypesNode = logConfigTypesNodeList->item(0);;
    

    BasicArrayList* logConfigTypeNodeVector = DomSearchHelper::getAllNodes(LogConfigTypeData::getInstance()->NAME, logConfigTypesNode->getChildNodes());;
    

    int32_t size = logConfigTypeNodeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Node* node = dynamic_cast<Node*>(logConfigTypeNodeVector->get(i));;
    

    LogConfigType* logType = LogConfigTypes::getInstance(node);;
    
logKeyVector->add(logType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return logKeyVector;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_CPP
