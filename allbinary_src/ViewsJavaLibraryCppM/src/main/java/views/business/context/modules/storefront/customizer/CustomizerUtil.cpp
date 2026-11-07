
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      

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

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CustomizerUtil::instance_owner() -> CustomizerUtil* { static std::unique_ptr<CustomizerUtil> value(new CustomizerUtil()); return value.get(); }
CustomizerUtil* CustomizerUtil::instance = CustomizerUtil::instance_owner();

    auto CustomizerUtil::getInstance() -> CustomizerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CustomizerUtil::instance;
    
}


CustomizerUtil::CustomizerUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::getTransformInfoInterfaceToCustomize(TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface) -> TransformInfoInterface*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(customizerTransformInfoInterface->getName()), this, "getTransformInfoInterfaceToCustomize()");
    

                                    }
                                

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    std::string viewName = transformInfoInterface->getName();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(customizerTransformInfoInterface);;
    

    TransformInfoInterface* customizedTransformInfoInterface = transformInfoEntityInterface->get(viewName, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return customizedTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::getTransformInfoObjectConfigComponentNodesToCustomize(TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface) -> BasicArrayList*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(customizerTransformInfoInterface->getName()), this, "getTransformInfoObjectConfigComponentNodesToCustomize()");
    

                                    }
                                

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    std::string viewName = transformInfoInterface->getName();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(customizerTransformInfoInterface);;
    

    TransformInfoInterface* customizedTransformInfoInterface = transformInfoEntityInterface->get(viewName, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransformInfoObjectConfigComponentNodes(customizedTransformInfoInterface);;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::getTransformInfoObjectConfigComponentNodes(TransformInfoInterface* transformInfoInterface) -> BasicArrayList*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = transformInfoInterface->getObjectConfigInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformInfoObjectConfigInterface->getTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::getTransformInfoObjectConfigGroupComponentNodes(TransformInfoInterface* transformInfoInterface) -> BasicArrayList*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "getTransformInfoObjectConfigComponentNodes()");
    

                                    }
                                

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = transformInfoInterface->getObjectConfigInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformInfoObjectConfigInterface->getGroupTransforms();;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::insert(TransformInfoInterface* transformInfoInterface, DomNodeInterface* domNodeInterface) -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "insert()");
    

                                    }
                                

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    BasicArrayList* allViewsToBeModified = this->getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface);;
    

    Document* document = DomDocumentHelper::create();;
    
document->appendChild(domNodeInterface->toXmlNode(document));
    

    std::string documentString = XmlDocumentHelper::toString(document);;
    

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    stringBuffer->append("Total Views For Modification: ");
    
stringBuffer->appendint(allViewsToBeModified->size());
    
stringBuffer->append(" New Xml/Data: ");
    
stringBuffer->append(documentString);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "insert()");
    

                                    }
                                
transformInfoInterface->setData(documentString);
    

    int32_t size = allViewsToBeModified->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* transformInfo = dynamic_cast<TransformInfo*>(allViewsToBeModified->get(index));;
    

    std::string viewNameOfViewToBeModified = transformInfo->getName();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(transformInfoInterface->getName());
    
stringBuffer->append(" is modifying view: ");
    
stringBuffer->append(viewNameOfViewToBeModified);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "insert()");
    

                                    }
                                

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(transformInfoInterface);;
    

    TransformInfoInterface* specifiedTransformInfoInterface = transformInfoEntityInterface->get(viewNameOfViewToBeModified, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    

                        if(specifiedTransformInfoInterface == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(transformInfoInterface->getName());
    
stringBuffer->append(" is unable to add data to view: ");
    
stringBuffer->append(viewNameOfViewToBeModified);
    
stringBuffer->append(" since it does not exist");
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "insert()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(transformInfoInterface->getName()) +JavaString::valueOf(" is adding data to view: ")) +JavaString::valueOf(viewNameOfViewToBeModified), this, "insert()");
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(viewNameOfViewToBeModified);
    
stringBuffer->append(" is changing data in ");
    
stringBuffer->append(JavaString::valueOf(specifiedTransformInfoInterface->getDataFilePath()));
    
stringBuffer->append(" to the following data:\n");
    
stringBuffer->append(documentString);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "insert()");
    

                                    }
                                
this->write(specifiedTransformInfoInterface, documentString);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::write(TransformInfoInterface* specifiedTransformInfoInterface, std::string documentString) -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(specifiedTransformInfoInterface->getName()), this, "write()");
    

                                    }
                                

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    
specifiedTransformInfoInterface->setData(documentString);
    
transformInfoEntityInterface->update(specifiedTransformInfoInterface->toHashMap());
    
}


                //@Throws(Exception.constructor)
            
    auto CustomizerUtil::getViewDataForComponentsInObjectConfig(TransformInfoInterface* transformInfoInterface) -> Document*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "getViewDataForComponentsInObjectConfig()");
    

                                    }
                                

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = transformInfoInterface->getObjectConfigInterface();;
    

    BasicArrayList* allViewsToBeModified = transformInfoObjectConfigInterface->getGroupTransforms();;
    

    TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder::getInstance();;
    

    int32_t size = allViewsToBeModified->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* nextTransformInfoInterface = dynamic_cast<TransformInfo*>(allViewsToBeModified->get(index));;
    

    std::string viewNameOfViewToBeModified = nextTransformInfoInterface->getName();;
    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(transformInfoInterface);;
    

    TransformInfoInterface* specifiedTransformInfoInterface = transformInfoEntityInterface->get(viewNameOfViewToBeModified, httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return specifiedTransformInfoInterface->getDataDocument();;
    
}




                            throw Exception("No Components Specified in ObjectConfig");
                    
}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_CPP
