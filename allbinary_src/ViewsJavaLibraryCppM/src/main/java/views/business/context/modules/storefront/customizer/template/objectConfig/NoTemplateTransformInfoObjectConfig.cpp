
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/w3c/dom/Document.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NoTemplateTransformInfoObjectConfig::NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface) : TransformInfoObjectConfig(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


NoTemplateTransformInfoObjectConfig::NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, Document* document) : TransformInfoObjectConfig(transformInfoInterface, document), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


NoTemplateTransformInfoObjectConfig::NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, std::string name, std::string type) : TransformInfoObjectConfig(transformInfoInterface, name, type), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    auto NoTemplateTransformInfoObjectConfig::generate(Document* objectConfigDocument) -> Document*{

    std::string docString = XmlDocumentHelper::toString(objectConfigDocument);;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Initial ObjectConfig: ") +JavaString::valueOf(docString), this, "generate()");
    

                                    }
                                

    std::string storeName = this->getTransformInfoInterface()->getStoreName();;
    

    std::string viewName = this->getTransformInfoInterface()->getName();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string VARKEY = TransformInfoObjectConfigData::getInstance()->VARKEY;;
    
hashMap->put(JavaString::valueOf(VARKEY) +JavaString::valueOf(StoreFrontData::getInstance()->NAME), storeName);
    
hashMap->put(JavaString::valueOf(VARKEY) +JavaString::valueOf(TransformInfoData::getInstance()->OWNER), viewName);
    

    std::string pageName = TransformTemplateCustomizerUtil::getInstance()->getPageNameHack(this->getTransformInfoInterface()->getName(), this->getTransformInfoInterface()->getStoreName());;
    
hashMap->put(JavaString::valueOf(VARKEY) +JavaString::valueOf(TransformInfoData::getInstance()->PARTIAL), pageName);
    

    Replace* replace = new Replace(hashMap);;
    

    Document* newObjectConfigDocument = DomDocumentHelper::create(replace->all(docString));;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Final ObjectConfig: ") +JavaString::valueOf(XmlDocumentHelper::toString(newObjectConfigDocument)), this, "generate()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newObjectConfigDocument;
    
}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_CPP
