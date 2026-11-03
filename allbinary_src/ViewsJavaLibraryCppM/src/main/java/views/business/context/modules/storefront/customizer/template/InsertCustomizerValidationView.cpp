
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_INSERTCUSTOMIZERVALIDATIONVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_INSERTCUSTOMIZERVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/customizer/template/InsertCustomizerValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/InsertTemplateCustomizerTransformInfoObjectConfig.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Sets Template Type

InsertCustomizerValidationView::InsertCustomizerValidationView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    HashMap<Object*, Object*>* requestHashMap = (new RequestParams(this->getPageContext()))->toHashMap();;
    
this->viewName= JavaBoxes::unbox<std::string>(requestHashMap->get(TransformInfoData::getInstance()->NAME));
    
}


    auto InsertCustomizerValidationView::isValid() -> bool{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Started Validation", this, this->commonStrings->IS_VALID);
    

                                    }
                                

    bool isValid = Boolean::TRUE;;
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->viewName))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    NoTemplateTransformInfoObjectConfig* objectConfig = new NoTemplateTransformInfoObjectConfig(this->getTransformInfoInterface(), this->getTransformInfoInterface()->getObjectConfigInterface()->toXmlDoc());;
    

    BasicArrayList* componentVector = objectConfig->getGroupTransforms();;
    

    int32_t size = componentVector->size();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Pointing ");
    
stringBuffer->appendint(componentVector->size());
    
stringBuffer->append(" Components");
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* transformInfo = dynamic_cast<TransformInfo*>(componentVector->get(index));;
    

    std::string transformInfoName = transformInfo->getName();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Setting Template Component with ViewName: ") +JavaString::valueOf(transformInfoName), this, this->commonStrings->IS_VALID);
    

                                    }
                                

    TransformInterface* componentInterface = TransformFactory::getInstance()->getInstance(this->abeClientInformation, transformInfoName, this->getTransformInfoInterface());;
    

    InsertTemplateCustomizerTransformInfoObjectConfig* templateViewObjectConfig = new InsertTemplateCustomizerTransformInfoObjectConfig(componentInterface->getTransformInfoInterface(), componentInterface->getTransformInfoInterface()->getObjectConfigInterface()->toXmlDoc());;
    

    std::string storeName = this->getTransformInfoInterface()->getStoreName();;
    

    int32_t endIndex = JavaString::indexOf(this->viewName, storeName) +storeName.size();;
    

    std::string storePrepend = JavaString::substring(this->viewName, 0, endIndex);;
    

    std::string viewNamePostfix = JavaString::substring(this->viewName, endIndex, this->viewName.size());;
    

    StringMaker* newViewNameStringBuffer = new StringMaker();;
    
newViewNameStringBuffer->append(storePrepend);
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    TransformInfosData* transformInfosData = TransformInfosData::getInstance();;
    

                        if(JavaString::indexOf(transformInfoName, transformInfosData->SMALL_PREVIEW) >= 0)
                        
                                    {
                                    newViewNameStringBuffer->append(commonSeps->SPACE);
    
newViewNameStringBuffer->append(transformInfosData->SMALL_PREVIEW);
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(transformInfoName, transformInfosData->PREVIEW) >= 0)
                        
                                    {
                                    newViewNameStringBuffer->append(commonSeps->SPACE);
    
newViewNameStringBuffer->append(transformInfosData->PREVIEW);
    

                                    }
                                
newViewNameStringBuffer->append(commonSeps->SPACE);
    
newViewNameStringBuffer->append(viewNamePostfix);
    

                        if(JavaString::indexOf(transformInfoName, GeneratorTransformInfoData::NAME) >= 0)
                        
                                    {
                                    newViewNameStringBuffer->append(commonSeps->SPACE);
    
newViewNameStringBuffer->append(GeneratorTransformInfoData::NAME);
    

                                    }
                                

    std::string newViewName = newViewNameStringBuffer->toString();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Template Component: ");
    
stringBuffer->append(transformInfoName);
    
stringBuffer->append("\n Now Pointing To View Name: ");
    
stringBuffer->append(newViewName);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                
templateViewObjectConfig->set(newViewName);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Template Component: ");
    
stringBuffer->append(transformInfoName);
    
stringBuffer->append("\n with ObjectConfig: ");
    
stringBuffer->append(templateViewObjectConfig->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                
componentInterface->getTransformInfoInterface()->setObjectConfigInterface(templateViewObjectConfig);
    

    HashMap<Object*, Object*>* updatedTransformInfoHashMap = componentInterface->getTransformInfoInterface()->toHashMap();;
    
TransformInfoEntityBuilder::getInstance()->update(updatedTransformInfoHashMap);
    
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto InsertCustomizerValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Error: Template Name Is Empty.");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Getting Validation Info";
    
}

}


    auto InsertCustomizerValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto InsertCustomizerValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto InsertCustomizerValidationView::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return views.ValidationOnlyTempUtil->getInstance()->view(this);;
    
}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_INSERTCUSTOMIZERVALIDATIONVIEW_CPP
