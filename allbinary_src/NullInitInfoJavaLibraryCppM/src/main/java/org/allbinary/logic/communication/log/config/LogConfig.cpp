
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

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
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
            
    public: BasicArrayList getTypeVector(){

    BasicArrayList logKeyVector = BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return logKeyVector;
    
}


};

            

