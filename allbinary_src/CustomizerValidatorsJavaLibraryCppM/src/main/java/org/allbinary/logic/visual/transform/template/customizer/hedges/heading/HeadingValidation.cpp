
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_HEDGES_HEADING_HEADINGVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_HEDGES_HEADING_HEADINGVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoValidation.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingData.h"


HeadingValidation::HeadingValidation() : logUtil(LogUtil::getInstance()){
this->title= new TitleValidation();
    
this->logo= new LogoValidation();
    
}


HeadingValidation::HeadingValidation(Document* document) : logUtil(LogUtil::getInstance()){

    NodeList* headingNodeList = document->getElementsByTagName(HeadingData::NAME);;
    

    Node* titleNode = DomSearchHelper::getNode(TitleData::getInstance()->NAME, headingNodeList->item(0)->getChildNodes());;
    

    Node* logoNode = DomSearchHelper::getNode(LogoData::getInstance()->NAME, headingNodeList->item(0)->getChildNodes());;
    
this->title= new TitleValidation(titleNode);
    
this->logo= new LogoValidation(logoNode);
    
}


HeadingValidation::HeadingValidation(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){
this->getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    auto HeadingValidation::getFormData(HashMap<Object*, Object*>* hashMap) -> void{
this->title= new TitleValidation(hashMap);
    
this->logo= new LogoValidation(hashMap);
    
}


    auto HeadingValidation::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    

    bool titleValid = Boolean::TRUE;;
    

    bool logoValid = Boolean::TRUE;;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->IS_VALID);
    

                                    }
                                

                        if(!this->title->isValid())
                        
                                    {
                                    titleValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->logo->isValid())
                        
                                    {
                                    logoValid= Boolean::FALSE;
    

                                    }
                                
                        else {
                            this->logo->processLogoFile();
    

                        }
                            

                        if(!titleValid && !logoValid)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("HeadingValidation: ") +JavaString::valueOf(valid), this, this->commonStrings->IS_VALID);
    

                                    }
                                



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


    auto HeadingValidation::validationInfo() -> std::string{

        try {
            
    bool valid = Boolean::TRUE;;
    

    bool titleValid = Boolean::TRUE;;
    

    bool logoValid = Boolean::TRUE;;
    

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(!this->title->isValid())
                        
                                    {
                                    titleValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->logo->isValid())
                        
                                    {
                                    logoValid= Boolean::FALSE;
    

                                    }
                                

                        if(!titleValid && !logoValid)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!valid)
                        
                                    {
                                    stringBuffer->append("Include a title and/or logo for the header.");
    

                                    }
                                



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


    auto HeadingValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto HeadingValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto HeadingValidation::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(HeadingData::NAME);;
    
node->appendChild(this->logo->toXmlNode(document));
    
node->appendChild(this->title->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_HEDGES_HEADING_HEADINGVALIDATION_CPP
