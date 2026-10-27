
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTYVALUES_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTYVALUES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyValues.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyValueData.h"
#include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyData.h"


CssPropertyValues::CssPropertyValues() : logUtil(LogUtil::getInstance()){
this->propertyValueVector= new BasicArrayListD();
    
}


CssPropertyValues::CssPropertyValues(Node* node) : logUtil(LogUtil::getInstance()){

    HashMap<Object*, Object*>* indexPropertyValueHashMap = StdUtil::getInstance()->createHashMap();;
    
this->propertyValueVector= new BasicArrayListD();
    

    BasicArrayList* cssPropertyNodeVector = DomSearchHelper::getAllNodes(CssPropertyValueData::getInstance()->NAME, node->getChildNodes());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->STYLE))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Number Of Properties: ") +JavaString::valueOf(cssPropertyNodeVector->size()), this, "CssProperties()");
    

                                    }
                                

    int32_t size = cssPropertyNodeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node* cssPropertyValueNode = dynamic_cast<Node*>(cssPropertyNodeVector->get(index));;
    

    Node* valueNode = DomSearchHelper::getNode(DomData::VALUE, cssPropertyValueNode->getChildNodes());;
    

    std::string propertyValue = DomNodeHelper::getTextNodeValue(valueNode);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->STYLE))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Property Value: ") +JavaString::valueOf(propertyValue), this, "CssProperties()");
    

                                    }
                                

    Node* indexNode = DomSearchHelper::getNode(DomData::INDEX, cssPropertyValueNode->getChildNodes());;
    

    std::string indexValue = DomNodeHelper::getTextNodeValue(indexNode);;
    
indexPropertyValueHashMap->put(indexValue, propertyValue);
    
}


    int32_t size2 = indexPropertyValueHashMap->keys().size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    int32_t indexInt = int32_t(index);;
    

    std::string propertyValue = indexPropertyValueHashMap->get(indexInt.toString());;
    
this->propertyValueVector->add(propertyValue);
    
}

}


    auto CssPropertyValues::toHashMap() -> HashMap<Object*, Object*>*{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    CssPropertyValueData* cssPropertyValueData = CssPropertyValueData::getInstance();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    int32_t size = this->propertyValueVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string value = this->propertyValueVector->get(index);;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(cssPropertyValueData->NAME);
    
stringBuffer->append(commonSeps->BRACKET_OPEN);
    
stringBuffer->appendint(index);
    
stringBuffer->append(commonSeps->BRACKET_CLOSE);
    
hashMap->put(stringBuffer->toString(), value);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto CssPropertyValues::toXmlNode(Document* document) -> Node*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    
this->logUtil->putF(JavaString::valueOf("CssPropertyValues HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toXmlNode()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueIndexNodes(document, CssPropertyData::getInstance()->VALUES, CssPropertyValueData::getInstance()->NAME, this->propertyValueVector);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTYVALUES_CPP
