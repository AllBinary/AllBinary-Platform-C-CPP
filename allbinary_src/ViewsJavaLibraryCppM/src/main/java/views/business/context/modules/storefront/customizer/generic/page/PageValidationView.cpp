
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/page/PageValidation.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/customizer/CustomizerUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/generic/page/PageView.h"

class PageValidationView: public PageView, public ValidationComponentInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: PageValidationView(TransformInfoInterface* transformInfoInterface) : PageView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("View Name: " +transformInfoInterface->getName(), this, "PageViewValidation()");
    

                                    }
                                
}


    public: bool isValid(){

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.START, this, this->commonStrings.IS_VALID);
    

                                    }
                                

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoObjectConfigInterface* pageObjectConfigInterface = this->getTransformInfoInterface()->getObjectConfigInterface();;
    

    BasicArrayList* allViewsToBeModifiedVector = pageObjectConfigInterface->getGroupTransforms();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Views To Be Modified: " +allViewsToBeModifiedVector->size(), this, "get(transformInfoInterface)");
    

                                    }
                                

    int32_t size = allViewsToBeModifiedVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* transformInfoInterface = dynamic_cast<TransformInfo*>(allViewsToBeModifiedVector->get(index));;
    

    std::string viewNameOfViewToBeModified = transformInfoInterface->getName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getTransformInfoInterface()->getName());
    
stringBuffer->append(" is modifying view: ");
    
stringBuffer->append(viewNameOfViewToBeModified);
    
this->logUtil->putF(stringBuffer->toString(), this, "insert()");
    

                                    }
                                

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    

    TransformInfoInterface* specifiedTransformInfoInterface = transformInfoEntityInterface->get(viewNameOfViewToBeModified, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getTransformInfoInterface()->getName());
    
stringBuffer->append(" is adding data to view: ");
    
stringBuffer->append(viewNameOfViewToBeModified);
    
this->logUtil->putF(stringBuffer->toString(), this, "insert()");
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string title = specifiedTransformInfoInterface->getName().substring(this->getTransformInfoInterface()->getStoreName()->length());;
    

                        if(title.compare("index") == 0)
                        
                                    {
                                    hashMap->put(TitleData::getInstance()->TEXT, this->getTransformInfoInterface()->getStoreName() +" - Home Page");
    

                                    }
                                
                        else {
                            hashMap->put(TitleData::getInstance()->TEXT, this->getTransformInfoInterface()->getStoreName() +" -" +title);
    

                        }
                            

    PageValidation* pageValidation = new PageValidation(hashMap);;
    

                        if(pageValidation->isValid() == Boolean::FALSE)
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(isValid == Boolean::TRUE)
                        
                                    {
                                    
    Document* document = DomDocumentHelper::create();;
    
document->appendChild(pageValidation->toXmlNode(document));
    

    std::string documentString = XmlDocumentHelper::toString(document);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(viewNameOfViewToBeModified);
    
stringBuffer->append(" is changing data in ");
    
stringBuffer->append(specifiedTransformInfoInterface->getDataFilePath()->toString());
    
stringBuffer->append(" to the following data:\n");
    
stringBuffer->append(documentString);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                
CustomizerUtil::getInstance()->write(specifiedTransformInfoInterface, documentString);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate", this, this->commonStrings.IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoObjectConfigInterface* objectConfig = this->getTransformInfoInterface()->getObjectConfigInterface();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    

    BasicArrayList* allViewsToBeModifiedVector = objectConfig->getGroupTransforms();;
    

    int32_t size = allViewsToBeModifiedVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* transformInfoInterface = dynamic_cast<TransformInfo*>(allViewsToBeModifiedVector->get(index));;
    

    std::string viewNameOfViewToBeModified = transformInfoInterface->getName();;
    

    TransformInfoInterface* specifiedTransformInfoInterface = transformInfoEntityInterface->get(viewNameOfViewToBeModified, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string title = specifiedTransformInfoInterface->getName().substring(this->getTransformInfoInterface()->getStoreName()->length());;
    

                        if(title.compare("index") == 0)
                        
                                    {
                                    hashMap->put(TitleData::getInstance()->TEXT, this->getTransformInfoInterface()->getStoreName() +" - Home Page");
    

                                    }
                                
                        else {
                            hashMap->put(TitleData::getInstance()->TEXT, this->getTransformInfoInterface()->getStoreName() +" -" +title);
    

                        }
                            

    PageValidation* pageValidation = new PageValidation(hashMap);;
    

                        if(pageValidation->isValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append("TransformInfo Name for PageValidation:" +specifiedTransformInfoInterface->getName());
    
stringBuffer->append("PageValidation:" +hashMap);
    
stringBuffer->append("PageValidation Info:" +pageValidation->validationInfo());
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "An auto generated page name was invalid.";
    
}

}


    public: Document* toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node* toValidationInfoNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

