
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: hashMap: HashMap<any, any>;

public constructor (AbeClientInformationInterface abeClientInformation, File file){

            super();
        this.setHashMap(new HashMap<any, any>());
    

    bytes: std::vector<int8_t> = new Array(100000);;
    

    idFile: FileInputStream = new FileInputStream(file);;
    

    length: int32_t = idFile!.read(bytes)!;;
    

    data: string = String.fromCharCode(...bytes);;
    

    endIndex: int32_t = data.lastIndexOf('>')!;;
    

    document: Document = DomDocumentHelper.create(data.substring(0, endIndex +1))!;;
    

    nodeList: NodeList = document.getElementsByTagName(NewInputAutomationModulesData.NAME)!;;
    

                        if(nodeList!.getLength() > 0)
                        
                                    {
                                    
    nameNodeList: NodeList = document.getElementsByTagName(InputAutomationModuleData.NAME)!;;
    
this.logUtil!.putF("Number Of Module(s) Specified: " +nameNodeList!.getLength(), this, "Contructor");
    




                        for (
    index: int32_t = 0;index < nameNodeList!.getLength(); index++)
        {

    node: Node = nameNodeList!.item(index)!;;
    
this.add(new InputAutomationModuleConfiguration(abeClientInformation, node));
    
}


                                    }
                                
}


public constructor (AbeClientInformationInterface abeClientInformation, Document document){

            super();
        this.setHashMap(new HashMap<any, any>());
    

    nameNodeList: NodeList = document.getElementsByTagName(InputAutomationModuleData.NAME)!;;
    
this.logUtil!.putF("Number Of Module(s) Specified: " +nameNodeList!.getLength(), this, "Contructor");
    




                        for (
    index: int32_t = 0;index < nameNodeList!.getLength(); index++)
        {

    node: Node = nameNodeList!.item(index)!;;
    
this.add(new InputAutomationModuleConfiguration(abeClientInformation, node));
    
}

}


public constructor (List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList){

            super();
        this.setHashMap(new HashMap<any, any>());
    

    size: int32_t = inputAutomationModuleConfigurationList!.length!;;
    

    inputAutomationModuleConfiguration: InputAutomationModuleConfiguration;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
inputAutomationModuleConfiguration= inputAutomationModuleConfigurationList!.get(index);
    
this.add(inputAutomationModuleConfiguration);
    
}

}


public constructor (){

            super();
        this.setHashMap(new HashMap<any, any>());
    
}


    public add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){
this.getHashMap()!.put(inputAutomationModuleConfiguration!.getClassName(), inputAutomationModuleConfiguration);
    
}


    public remove(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){
this.getHashMap()!.remove(inputAutomationModuleConfiguration!.getClassName());
    
}


    public HashMap<any, any> getHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashMap;
    
}


    public setHashMap(HashMap<any, any> hashMap){
this.hashMap= hashMap;
    
}


};

            

