
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 leIIgal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_TITLE_TITLEBODYVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_TITLE_TITLEBODYVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/bodies/title/TitleBodyValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleNotRequiredValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TitleBodyValidation::TitleBodyValidation() : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->body= stringUtil->EMPTY_STRING;
    
this->titleValidation= new TitleNotRequiredValidation();
    
}


TitleBodyValidation::TitleBodyValidation(Document* document) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, "Constructor(document)");
    

                                    }
                                

    NodeList* nodeList = document->getElementsByTagName(BodyData::getInstance()->NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* aBodyNode = nodeList->item(index);;
    

    Node* aBodyValueNode = DomSearchHelper::getNode(DomData::VALUE, aBodyNode->getChildNodes());;
    
this->body= DomNodeHelper::getTextNodeValue(aBodyValueNode);
    

    Node* titleNode = DomSearchHelper::getNode(TitleData::getInstance()->NAME, aBodyNode->getChildNodes());;
    
this->titleValidation= new TitleNotRequiredValidation(titleNode);
    

                        if(index > 1)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("To Many Body Nodes", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                                    }
                                
}

}


TitleBodyValidation::TitleBodyValidation(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "Constructor(hashmap)");
    

                                    }
                                
this->getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    auto TitleBodyValidation::getFormData(HashMap<Object*, Object*>* hashMap) -> void{
this->body= JavaBoxes::unbox<std::string>(hashMap->get(BodyData::getInstance()->NAME));
    
this->titleValidation= new TitleNotRequiredValidation(hashMap);
    
}


    auto TitleBodyValidation::isValid() -> bool{

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("TitleBodyValidation", this, this->commonStrings->IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidNotRequired(this->body, BodyData::getInstance()->MIN, AbSqlData::MAXBLOB))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->titleValidation->isValid())
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("TitleBodyValidation: ") +JavaString::valueOf(isValid), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto TitleBodyValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    


                            {
                            stringBuffer->append("Error: Data submitted is < ");
    
stringBuffer->appendint(BodyData::getInstance()->MIN);
    
stringBuffer->append(" or > ");
    
stringBuffer->appendint(AbSqlData::MAXBLOB);
    

                            }
                    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto TitleBodyValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto TitleBodyValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto TitleBodyValidation::toXmlNode(Document* document) -> Node*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Title Body: ") +JavaString::valueOf(this->body), this, "toXmlNode(document)");
    

                                    }
                                

    Node* node = ModDomHelper::createNameValueNodes(document, BodyData::getInstance()->NAME, this->body);;
    
node->appendChild(this->titleValidation->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_TITLE_TITLEBODYVALIDATION_CPP
