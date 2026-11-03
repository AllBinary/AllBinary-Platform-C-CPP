
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"
        

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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"


GenericStoreTransformInfoObjectConfig::GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) : TransformInfoObjectConfig(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
}


GenericStoreTransformInfoObjectConfig::GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) : TransformInfoObjectConfig(transformInfoInterface, document), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


GenericStoreTransformInfoObjectConfig::GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string name, std::string type) : TransformInfoObjectConfig(transformInfoInterface, name, type), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    auto GenericStoreTransformInfoObjectConfig::generate(Document* objectConfigDocument) -> Document*{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TransformInfo: ");
    

                        if(this->getTransformInfoInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->getTransformInfoInterface()->getName());
    

                                    }
                                
                        else {
                            stringBuffer->append("No Owner!?#@");
    

                        }
                            
this->logUtil->putF(stringBuffer->toString(), this, "generate()");
    

                                    }
                                

    TransformInfoHttp* transformInfoHttpStoreInterface = dynamic_cast<TransformInfoHttp*>(this->getTransformInfoInterface());;
    

    std::string objectConfigDocumentString = XmlDocumentHelper::toString(objectConfigDocument);;
    

    HashMap<Object*, Object*>* replaceHashMap = this->createReplaceHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->generate(objectConfigDocumentString, replaceHashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericStoreTransformInfoObjectConfig::createReplaceHashMap(TransformInfoHttp* transformInfoHttpStoreInterface, std::string objectConfigDocumentString) -> HashMap<Object*, Object*>*{

    std::string storeName = transformInfoHttpStoreInterface->getStoreName();;
    

    HashMap<Object*, Object*>* hashMap = this->createHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString);;
    

    TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData::getInstance();;
    
hashMap->put(transformInfoObjectConfigData->VARKEY +StoreFrontData::getInstance()->NAME, storeName);
    

    std::string pageName = TransformTemplateCustomizerUtil::getInstance()->getPageNameHack(this->getTransformInfoInterface()->getName(), storeName);;
    
hashMap->put(transformInfoObjectConfigData->VARKEY +TransformInfoData::getInstance()->PARTIAL, pageName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericStoreTransformInfoObjectConfig::createHashMap(TransformInfoHttp* transformInfoHttpStoreInterface, std::string objectConfigDocumentString) -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string storeName = transformInfoHttpStoreInterface->getStoreName();;
    

    HashMap<Object*, Object*>* propertiesHashMap = transformInfoHttpStoreInterface->getPropertiesHashMap();;
    

    std::string templateNameOverride = StringUtil::getInstance()->getNonNull(JavaBoxes::unbox<std::string>(propertiesHashMap->get(TransformInfoData::getInstance()->PARTIAL)));;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("TemplateNameOverride: ") +JavaString::valueOf(templateNameOverride), this, "generate()");
    

                                    }
                                

    StringMaker* templateNameStringBuffer = new StringMaker();;
    
templateNameStringBuffer->append(storeName);
    
templateNameStringBuffer->append(templateNameOverride);
    
templateNameStringBuffer->append(CommonSeps::getInstance()->SPACE);
    
templateNameStringBuffer->append(RootTransformInfoData::NAME);
    

    std::string templateNameKey = TransformInfoObjectConfigData::getInstance()->VARKEY +TransformInfoData::getInstance()->OWNER;;
    

                        if(JavaString::indexOf(objectConfigDocumentString, templateNameKey) !=  -1)
                        
                                    {
                                    
    TransformTemplateInterface* templateInterface = TransformTemplateFactory::getInstance()->getInstance(this->abeClientInformation, templateNameStringBuffer->toString(), transformInfoHttpStoreInterface->getPropertiesHashMap(), transformInfoHttpStoreInterface->getPageContext());;
    

    std::string selectedTemplate = templateInterface->getName();;
    
hashMap->put(templateNameKey, selectedTemplate);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericStoreTransformInfoObjectConfig::generate(std::string objectConfigDocumentString, HashMap<Object*, Object*>* hashMap) -> Document*{

    Replace* replace = new Replace(hashMap);;
    

    Document* newObjectConfigDocument = DomDocumentHelper::create(replace->all(objectConfigDocumentString));;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Final ObjectConfig: ") +JavaString::valueOf(XmlDocumentHelper::toString(newObjectConfigDocument)), this, "generate()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newObjectConfigDocument;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_CPP
