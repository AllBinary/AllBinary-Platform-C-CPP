
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
        #include "LogConfigData.h"

class LogConfig
            : public Object
         {

    private: bool isEnabled;

    private: std::string name;

    private: std::string description;

    private: std::string path;

    private: std::string fileName;

public: LogConfig(std::string aName, std::string aDescription, std::string aPath, std::string aFileName){
this->isEnabled= false;
    
this->name= aName;
    
this->description= aDescription;
    
this->path= aPath;
    
this->fileName= aFileName;
    
}


public: LogConfig(Node node){

    Node enabledValueNode = DomSearchHelper::getNode(EntryData::getInstance().ENABLE, node.getChildNodes());;
    

    std::string isEnabledString = DomNodeHelper::getTextNodeValue(enabledValueNode);;
    
this->isEnabled= BooleanUtil::getInstance().getFromString(isEnabledString);
    

    LogConfigData logConfigData = LogConfigData::getInstance();;
    

    Node nameValueNode = DomSearchHelper::getNode(logConfigData.NAME, node.getChildNodes());;
    
this->name= DomNodeHelper::getTextNodeValue(nameValueNode);
    

    Node descriptionValueNode = DomSearchHelper::getNode(logConfigData.DESCRIPTION, node.getChildNodes());;
    
this->description= DomNodeHelper::getTextNodeValue(descriptionValueNode);
    

    Node fileValueNode = DomSearchHelper::getNode(logConfigData.FILE, node.getChildNodes());;
    
this->fileName= DomNodeHelper::getTextNodeValue(fileValueNode);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isEnabled;
    
}


    public: void enable(){
this->isEnabled= true;
    
}


    public: void disable(){
this->isEnabled= false;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    public: std::string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileName;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setDescription(std::string value){
this->description= value;
    
}


    public: void setPath(std::string value){
this->path= value;
    
}


    public: void setFileName(std::string value){
this->fileName= value;
    
}


                //@Throws(Exception.constructor)
            
    private: Document getDoc(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
stringBuffer.append(PATH_GLOBALS::getInstance().INIT_PATH);
    
stringBuffer.append(this->getFileName());
    

    AbFile file = AbFile::createAbFile(stringBuffer.toString());;
    

    Document document = DomDocumentHelper::create(AbFileLocalInputStream(file));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTypeVector(){

    BasicArrayList logKeyVector = BasicArrayListD();;
    

    Document document = this->getDoc();;
    

    NodeList logConfigTypesNodeList = document.getElementsByTagName(LogConfigTypesData::getInstance().NAME);;
    

    Node logConfigTypesNode = logConfigTypesNodeList.item(0);;
    

    BasicArrayList logConfigTypeNodeVector = DomSearchHelper::getAllNodes(LogConfigTypeData::getInstance().NAME, logConfigTypesNode.getChildNodes());;
    

    int32_t size = logConfigTypeNodeVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Node node = logConfigTypeNodeVector.get(i);;
    

    LogConfigType logType = LogConfigTypes::getInstance(node);;
    
logKeyVector.add(logType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return logKeyVector;
    
}


};

            

