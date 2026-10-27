
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NoTemplateTransformInfoObjectConfig: public TransformInfoObjectConfig {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: NoTemplateTransformInfoObjectConfig(Object* transformInfoInterface) : TransformInfoObjectConfig(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: NoTemplateTransformInfoObjectConfig(Object* transformInfoInterface, Object* document) : TransformInfoObjectConfig(transformInfoInterface, document){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


public: NoTemplateTransformInfoObjectConfig(Object* transformInfoInterface, std::string name, std::string type) : TransformInfoObjectConfig(transformInfoInterface, name, type){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    protected: Document* generate(Document* objectConfigDocument){

    std::string docString = XmlDocumentHelper::toString(objectConfigDocument);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Initial ObjectConfig: " +docString, this, "generate()");
    

                                    }
                                

    std::string storeName = this->getTransformInfoInterface()->getStoreName();;
    

    std::string viewName = this->getTransformInfoInterface()->getName();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string VARKEY = TransformInfoObjectConfigData::getInstance()->VARKEY;;
    
hashMap->put(VARKEY +StoreFrontData::getInstance()->NAME, storeName);
    
hashMap->put(VARKEY +TransformInfoData::getInstance()->OWNER, viewName);
    

    std::string pageName = TransformTemplateCustomizerUtil::getInstance()->getPageNameHack(this->getTransformInfoInterface()->getName(), this->getTransformInfoInterface()->getStoreName());;
    
hashMap->put(VARKEY +TransformInfoData::getInstance()->PARTIAL, pageName);
    

    Replace* replace = new Replace(hashMap);;
    

    Document* newObjectConfigDocument = DomDocumentHelper::create(replace->all(docString));;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Final ObjectConfig: " +XmlDocumentHelper::toString(newObjectConfigDocument), this, "generate()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newObjectConfigDocument;
    
}


};

            

