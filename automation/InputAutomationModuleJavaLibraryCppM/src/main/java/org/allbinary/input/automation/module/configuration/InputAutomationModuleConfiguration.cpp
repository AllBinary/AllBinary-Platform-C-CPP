
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
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <javax/xml/bind/annotation/XmlAccessType.h>

      
#include <javax/xml/bind/annotation/XmlAccessorType.h>

      
#include <javax/xml/bind/annotation/XmlElement.h>

      
#include <javax/xml/bind/annotation/XmlRootElement.h>

      
#include <javax/xml/bind/annotation/XmlType.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/InputAutomationData.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationModuleConfiguration
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: className: string;

    private: name: string;

    private: inputAutomationModuleInterface: InputAutomationModuleFactoryInterface;

public constructor (){

            super();
        }


public constructor (AbeClientInformationInterface abeClientInformation, Node node){

            super();
        this.init(abeClientInformation, node);
    
}


public constructor (AbeClientInformationInterface abeClientInformation, string name, string className){

            super();
        this.setName(name);
    
this.setClassName(className);
    
this.init(abeClientInformation);
    
}


public constructor (InputAutomationModuleFactoryInterface inputAutomationModuleInterface){

            super();
        this.setInputAutomationModuleInterface(inputAutomationModuleInterface);
    
this.setClassName(this.inputAutomationModuleInterface!.constructor.name.toString()!);
    
}


                //@Throws(Exception.constructor)
            
    public init(AbeClientInformationInterface abeClientInformation, Node node){

    nodeList: NodeList = node.getChildNodes()!;;
    

                        if(nodeList != 
                                    null
                                )
                        
                                    {
                                    
    classNameNode: Node = DomSearchHelper.getNode(DynamicObjectData.NAME, nodeList)!;;
    

                        if(classNameNode != 
                                    null
                                )
                        
                                    {
                                    this.setClassName(DomNodeHelper.getTextNodeValue(classNameNode));
    
this.init(abeClientInformation);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Class Node Null", this, this.commonStrings!.INIT);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF(InputAutomationData.NAME +" Node Has No Children", this, "Contructor");
    

                        }
                            
}


    public init(AbeClientInformationInterface abeClientInformation){

        try {
            this.logUtil!.putF("Name: " +getName(), this, this.commonStrings!.INIT);
    
this.logUtil!.putF("ClassName: " +className, this, this.commonStrings!.INIT);
    
this.setInputAutomationModuleInterface(AbeFactory.getInstance()!.getInstance()!.getInstance(abeClientInformation, getClassName()) as InputAutomationModuleFactoryInterface);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    



                            throw new RuntimeException();
                    
}

}


                //@Throws(Exception.constructor)
            
    public Node toDomNode(Document document){

    node: Node = document.createElement(InputAutomationModuleData.NAME)!;;
    

    classNameNode: Node = ModDomHelper.createTextNode(document, DynamicObjectData.NAME, this.getClassName())!;;
    
node.appendChild(classNameNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.logUtil!.putF("Name: " +name, this, "setName");
    
this.name= name;
    
}


    public string getClassName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.className;
    
}


    public setClassName(string className){
this.logUtil!.putF("ClassName : " +className, this, "setClassName");
    
this.className= className;
    
}


    public InputAutomationModuleFactoryInterface getInputAutomationModuleInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inputAutomationModuleInterface;
    
}


    public setInputAutomationModuleInterface(InputAutomationModuleFactoryInterface inputAutomationModuleInterface){
this.logUtil!.putF("InputAutomationModuleFactoryInterface : " +inputAutomationModuleInterface, this, "setInputAutomationModuleInterface");
    
this.inputAutomationModuleInterface= inputAutomationModuleInterface;
    
this.setName(this.inputAutomationModuleInterface!.getName());
    
}


};

            

