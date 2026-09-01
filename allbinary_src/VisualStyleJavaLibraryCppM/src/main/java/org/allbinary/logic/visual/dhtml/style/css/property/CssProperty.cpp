
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

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssPropertyValues.h"
#include "CssPropertyData.h"

class CssProperty
            : public Object
        : public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string propertyName;

    private: CssPropertyValues cssPropertyValues;

public: CssProperty(std::string name){
this->propertyName= name;
    
this->cssPropertyValues= CssPropertyValues();
    
}


public: CssProperty(Node node){

    Node propertyNode = DomSearchHelper::getNode(DomData::VALUE, node.getChildNodes());;
    
this->propertyName= DomNodeHelper::getTextNodeValue(propertyNode);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().STYLE))
                        
                                    {
                                    this->logUtil.putF("Name: " +this->getName(), this, "CssProperty()");
    

                                    }
                                

    Node propertyValuesNode = DomSearchHelper::getNode(CssPropertyData::getInstance().VALUES, node.getChildNodes());;
    
this->cssPropertyValues= CssPropertyValues(propertyValuesNode);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertyName;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(CssPropertyData::getInstance().NAME, this->propertyName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    HashMap<any, any> hashMap = this->toHashMap();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("CssView HashMap: " +hashMap.toString(), this, "toXmlNode()");
    

                                    }
                                

    Node node = ModDomHelper::createNameValueNodes(document, CssPropertyData::getInstance().NAME, this->propertyName);;
    
node.appendChild(this->cssPropertyValues.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

