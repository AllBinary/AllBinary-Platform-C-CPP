
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfig.h"
#include "TransformInfoObjectConfigData.h"

class GenericStoreTransformInfoObjectConfig: public TransformInfoObjectConfig {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: AbeClientInformationInterface abeClientInformation;

public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface) : TransformInfoObjectConfig(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
}


public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, Object document) : TransformInfoObjectConfig(transformInfoInterface, document){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string name, std::string type) : TransformInfoObjectConfig(transformInfoInterface, name, type){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    protected: Document generate(Document objectConfigDocument){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TransformInfo: ");
    

                        if(this->getTransformInfoInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->getTransformInfoInterface().getName());
    

                                    }
                                
                        else {
                            stringBuffer.append("No Owner!?#@");
    

                        }
                            
this->logUtil.putF(stringBuffer.toString(), this, "generate()");
    

                                    }
                                

    TransformInfoHttp transformInfoHttpStoreInterface = this->getTransformInfoInterface();;
    

    std::string objectConfigDocumentString = XmlDocumentHelper::toString(objectConfigDocument);;
    

    HashMap<Object*, Object*> replaceHashMap = this->createReplaceHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->generate(objectConfigDocumentString, replaceHashMap);;
    
}


                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*> createReplaceHashMap(TransformInfoHttp transformInfoHttpStoreInterface, std::string objectConfigDocumentString){

    std::string storeName = transformInfoHttpStoreInterface.getStoreName();;
    

    HashMap<Object*, Object*> hashMap = this->createHashMap(transformInfoHttpStoreInterface, objectConfigDocumentString);;
    

    TransformInfoObjectConfigData transformInfoObjectConfigData = TransformInfoObjectConfigData::getInstance();;
    
hashMap.put(transformInfoObjectConfigData.VARKEY +StoreFrontData::getInstance().NAME, storeName);
    

    std::string pageName = TransformTemplateCustomizerUtil::getInstance().getPageNameHack(this->getTransformInfoInterface().getName(), storeName);;
    
hashMap.put(transformInfoObjectConfigData.VARKEY +TransformInfoData::getInstance().PARTIAL, pageName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*> createHashMap(TransformInfoHttp transformInfoHttpStoreInterface, std::string objectConfigDocumentString){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    

    std::string storeName = transformInfoHttpStoreInterface.getStoreName();;
    

    HashMap<Object*, Object*> propertiesHashMap = transformInfoHttpStoreInterface.getPropertiesHashMap();;
    

    std::string templateNameOverride = StringUtil::getInstance().getNonNull(propertiesHashMap.get(TransformInfoData::getInstance().PARTIAL));;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TemplateNameOverride: " +templateNameOverride, this, "generate()");
    

                                    }
                                

    StringMaker templateNameStringBuffer = StringMaker();;
    
templateNameStringBuffer.append(storeName);
    
templateNameStringBuffer.append(templateNameOverride);
    
templateNameStringBuffer.append(CommonSeps::getInstance().SPACE);
    
templateNameStringBuffer.append(RootTransformInfoData::NAME);
    

    std::string templateNameKey = TransformInfoObjectConfigData::getInstance().VARKEY +TransformInfoData::getInstance().OWNER;;
    

                        if(objectConfigDocumentString.indexOf(templateNameKey) !=  -1)
                        
                                    {
                                    
    TransformTemplateInterface templateInterface = TransformTemplateFactory::getInstance().getInstance(this->abeClientInformation, templateNameStringBuffer.toString(), transformInfoHttpStoreInterface.getPropertiesHashMap(), transformInfoHttpStoreInterface.getPageContext());;
    

    std::string selectedTemplate = templateInterface.getName();;
    
hashMap.put(templateNameKey, selectedTemplate);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    private: Document generate(std::string objectConfigDocumentString, HashMap<Object*, Object*> hashMap){

    Replace replace = Replace(hashMap);;
    

    Document newObjectConfigDocument = DomDocumentHelper::create(replace.all(objectConfigDocumentString));;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Final ObjectConfig: " +XmlDocumentHelper::toString(newObjectConfigDocument), this, "generate()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newObjectConfigDocument;
    
}


};

            

