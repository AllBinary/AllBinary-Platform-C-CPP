
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_CSSSTYLEVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_CSSSTYLEVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StyleData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StylesData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StylesValidationFactory.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CssStyleValidation::CssStyleValidation() : logUtil(LogUtil::getInstance()){
this->cssStyleElementVector= new BasicArrayListD();
    
}


CssStyleValidation::CssStyleValidation(Document* document) : logUtil(LogUtil::getInstance()){
this->cssStyleElementVector= StylesValidationFactory::getInstance()->getInstance(document);
    
}


CssStyleValidation::CssStyleValidation(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){
this->cssStyleElementVector= StylesValidationFactory::getInstance(hashMap);
    
}


    auto CssStyleValidation::isValid() -> bool{

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->IS_VALID);
    

                                    }
                                

    int32_t size = this->cssStyleElementVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    ValidationInterface* styleValidationInterface = dynamic_cast<ValidationInterface*>(this->cssStyleElementVector->get(i));;
    

                        if(!styleValidationInterface->isValid())
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                
}


                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("End: ") +JavaString::valueOf(isValid), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto CssStyleValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto CssStyleValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto CssStyleValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto CssStyleValidation::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(StylesData::getInstance()->NAME);;
    

    Node* styleNode = document->createElement(StyleData::getInstance()->NAME);;
    
node->appendChild(styleNode);
    

    int32_t size = this->cssStyleElementVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    DomNodeInterface* styleDomNodeInterface = dynamic_cast<DomNodeInterface*>(this->cssStyleElementVector->get(i));;
    
styleNode->appendChild(styleDomNodeInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_CSSSTYLEVALIDATION_CPP
