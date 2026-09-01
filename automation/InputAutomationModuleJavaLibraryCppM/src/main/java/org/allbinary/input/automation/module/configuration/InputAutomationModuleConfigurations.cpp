
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/List.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/NewInputAutomationModulesData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationModuleConfiguration.h"

class InputAutomationModuleConfigurations
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<any, any> hashMap;

public: InputAutomationModuleConfigurations(AbeClientInformationInterface abeClientInformation, File file){
this->setHashMap(HashMap<any, any>());
    

    std::vector<int8_t> bytes = new Array(100000);;
    

    FileInputStream idFile = FileInputStream(file);;
    

    int32_t length = idFile.read(bytes);;
    

    std::string data = String.fromCharCode(...bytes);;
    

    int32_t endIndex = data.lastIndexOf('>');;
    

    Document document = DomDocumentHelper::create(data.substring(0, endIndex +1));;
    

    NodeList nodeList = document.getElementsByTagName(NewInputAutomationModulesData::NAME);;
    

                        if(nodeList.getLength() > 0)
                        
                                    {
                                    
    NodeList nameNodeList = document.getElementsByTagName(InputAutomationModuleData::NAME);;
    
this->logUtil.putF("Number Of Module(s) Specified: " +nameNodeList.getLength(), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList.getLength(); index++)
        {

    Node node = nameNodeList.item(index);;
    
this->add(InputAutomationModuleConfiguration(abeClientInformation, node));
    
}


                                    }
                                
}


public: InputAutomationModuleConfigurations(AbeClientInformationInterface abeClientInformation, Document document){
this->setHashMap(HashMap<any, any>());
    

    NodeList nameNodeList = document.getElementsByTagName(InputAutomationModuleData::NAME);;
    
this->logUtil.putF("Number Of Module(s) Specified: " +nameNodeList.getLength(), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList.getLength(); index++)
        {

    Node node = nameNodeList.item(index);;
    
this->add(InputAutomationModuleConfiguration(abeClientInformation, node));
    
}

}


public: InputAutomationModuleConfigurations(List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList){
this->setHashMap(HashMap<any, any>());
    

    int32_t size = inputAutomationModuleConfigurationList.length;;
    

    InputAutomationModuleConfiguration inputAutomationModuleConfiguration;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
inputAutomationModuleConfiguration= inputAutomationModuleConfigurationList.get(index);
    
this->add(inputAutomationModuleConfiguration);
    
}

}


public: InputAutomationModuleConfigurations(){
this->setHashMap(HashMap<any, any>());
    
}


    public: void add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){
this->getHashMap().put(inputAutomationModuleConfiguration.getClassName(), inputAutomationModuleConfiguration);
    
}


    public: void remove(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){
this->getHashMap().remove(inputAutomationModuleConfiguration.getClassName());
    
}


    public: HashMap<any, any> getHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashMap;
    
}


    public: void setHashMap(HashMap<any, any> hashMap){
this->hashMap= hashMap;
    
}


};

            

