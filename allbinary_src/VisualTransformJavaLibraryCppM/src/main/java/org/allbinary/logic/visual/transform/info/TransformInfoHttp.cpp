
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"


TransformInfoHttp::TransformInfoHttp(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext, bool crud) : TransformInfo(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= new AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(propertiesHashMap->toString()), this, "Constructor(HashMap, PageContext, boolean)");
    

                                    }
                                
this->override(propertiesHashMap);
    
}


TransformInfoHttp::TransformInfoHttp(HttpServletRequest* request, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfo(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= new AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(propertiesHashMap->toString()), this, "Constructor(HttpServletRequest, HashMap, PageContext)");
    

                                    }
                                
this->set((new RequestParams(dynamic_cast<HttpServletRequest*>(request)))->toHashMap());
    
this->override(propertiesHashMap);
    
}


TransformInfoHttp::TransformInfoHttp(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfo(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= new AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(propertiesHashMap->toString()), this, "Constructor(HashMap, HashMap, PageContext)");
    

                                    }
                                
this->set(databaseHashMap);
    
}


TransformInfoHttp::TransformInfoHttp(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfo(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= new AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(propertiesHashMap->toString()), this, "Constructor(HashMap, PageContext)");
    

                                    }
                                
this->set(propertiesHashMap);
    
}


TransformInfoHttp::TransformInfoHttp(TransformInfoHttp* parentViewOfThisTransformInfoInterface) : TransformInfo(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= new AbContext(parentViewOfThisTransformInfoInterface->getPropertiesHashMap(), parentViewOfThisTransformInfoInterface->getPageContext());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttp::set(HashMap<Object*, Object*>* hashMap) -> void{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "set()");
    

                                    }
                                

    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    
this->setName(hashMap->get(transformInfoData->NAME));
    
this->setStoreName(hashMap->get(StoreFrontData::getInstance()->NAME));
    
this->setObjectFile(hashMap->get(transformInfoData->OBJECTFILENAME));
    
this->setObject(hashMap->get(transformInfoData->OBJECT));
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::string objectConfigString = hashMap->get(transformInfoData->OBJECTCONFIG);;
    

                        if(stringValidationUtil->isValidRequired(objectConfigString, 10, AbSqlData::MAXBLOB))
                        
                                    {
                                    this->setObjectConfig(objectConfigString);
    

                                    }
                                
                        else {
                            this->setObjectConfig((new TransformInfoObjectConfig(this))->toString());
    

                        }
                            

                        if(!stringValidationUtil->isEmpty(hashMap->get(transformInfoData->OBJECTCONFIGFILENAME)))
                        
                                    {
                                    this->setObjectConfigFile(hashMap->get(transformInfoData->OBJECTCONFIGFILENAME));
    

                                    }
                                
this->setTemplateFile(hashMap->get(transformInfoData->TEMPLATEFILENAME));
    
this->setTemplate(hashMap->get(transformInfoData->TEMPLATE));
    
this->setDataFile(hashMap->get(transformInfoData->DATAFILENAME));
    
this->setData(hashMap->get(transformInfoData->DATA));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->log(), this, "set()");
    

                                    }
                                
}


    auto TransformInfoHttp::getWeblisketSession() -> WeblisketSessionInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext->getWeblisketSession();;
    
}


    auto TransformInfoHttp::getPageContext() -> PageContext*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext->getPageContext();;
    
}


    auto TransformInfoHttp::getPropertiesHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext->getPropertiesHashMap();;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttp::getTemplateFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH, this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttp::getObjectConfigFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH, this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttp::getDataFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH, this->getDataFile());
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_CPP
