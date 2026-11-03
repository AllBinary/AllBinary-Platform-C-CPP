
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
                *  II
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/includes/meta/MetasValidation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeValuesData.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetasData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/includes/meta/MetaValidation.h"


MetasValidation::MetasValidation(std::string storeName) : logUtil(LogUtil::getInstance()){
this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    
this->metaValidationVector= new BasicArrayListD();
    

    std::string contentValue = JavaString::valueOf(this->storeFrontInterface->getName()) +JavaString::valueOf(" E-Commerce Site");;
    

    MetaValidation* keywordsMetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory::getInstance()->NAME, "Keywords", HtmlMetaAttributeValuesData::getInstance()->KEYWORDS, contentValue);;
    

    MetaValidation* abstractMetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory::getInstance()->NAME, "Abstract", HtmlMetaAttributeValuesData::getInstance()->ABSTRACT, contentValue);;
    

    MetaValidation* descriptionMetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory::getInstance()->NAME, "Description", HtmlMetaAttributeValuesData::getInstance()->DESCRIPTION, contentValue);;
    
this->metaValidationVector->add(keywordsMetaValidation);
    
this->metaValidationVector->add(abstractMetaValidation);
    
this->metaValidationVector->add(descriptionMetaValidation);
    
}


MetasValidation::MetasValidation(Document* document) : logUtil(LogUtil::getInstance()){



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    auto MetasValidation::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto MetasValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto MetasValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto MetasValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto MetasValidation::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(HtmlMetasData::getInstance()->NAME);;
    

    std::vector<MetaValidation*> metaArray = JavaBoxes::unbox<std::vector<MetaValidation*>>(this->metaValidationVector->toArrayType(std::vector<MetaValidation*>(this->metaValidationVector->size())));;
    

    int32_t size = metaArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    MetaValidation* metaValidation = metaArray[i];;
    
node->appendChild(metaValidation->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_CPP
