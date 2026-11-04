
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssProperty.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyValues.h"
#include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyData.h"


CssProperty::CssProperty(std::string name) : logUtil(LogUtil::getInstance()){
this->propertyName= name;
    
this->cssPropertyValues= new CssPropertyValues();
    
}


CssProperty::CssProperty(Node* node) : logUtil(LogUtil::getInstance()){

    Node* propertyNode = DomSearchHelper::getNode(DomData::VALUE, node->getChildNodes());;
    
this->propertyName= DomNodeHelper::getTextNodeValue(propertyNode);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->STYLE))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Name: ") +JavaString::valueOf(this->getName()), this, "CssProperty()");
    

                                    }
                                

    Node* propertyValuesNode = DomSearchHelper::getNode(CssPropertyData::getInstance()->VALUES, node->getChildNodes());;
    
this->cssPropertyValues= new CssPropertyValues(propertyValuesNode);
    
}


    auto CssProperty::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->propertyName;
    
}


    auto CssProperty::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(CssPropertyData::getInstance()->NAME, this->propertyName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto CssProperty::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("CssView HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toXmlNode()");
    

                                    }
                                

    Node* node = ModDomHelper::createNameValueNodes(document, CssPropertyData::getInstance()->NAME, this->propertyName);;
    
node->appendChild(this->cssPropertyValues->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTY_CPP
