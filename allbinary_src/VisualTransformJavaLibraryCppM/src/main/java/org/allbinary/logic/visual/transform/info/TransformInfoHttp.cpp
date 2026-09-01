
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
        



            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "TransformInfo.h"
#include "TransformInfoHttpInterface.h"
#include "TransformInfoData.h"

class TransformInfoHttp: public TransformInfo, public TransformInfoHttpInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AbContext abContext;

public: TransformInfoHttp(HashMap<any, any> propertiesHashMap, PageContext pageContext, bool crud){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Properties HashMap: " +propertiesHashMap.toString(), this, "Constructor(HashMap, PageContext, boolean)");
    

                                    }
                                
this->override(propertiesHashMap);
    
}


public: TransformInfoHttp(HttpServletRequest request, HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Properties HashMap: " +propertiesHashMap.toString(), this, "Constructor(HttpServletRequest, HashMap, PageContext)");
    

                                    }
                                
this->set(RequestParams(request as HttpServletRequest).toHashMap());
    
this->override(propertiesHashMap);
    
}


public: TransformInfoHttp(HashMap<any, any> databaseHashMap, HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Properties HashMap: " +propertiesHashMap.toString(), this, "Constructor(HashMap, HashMap, PageContext)");
    

                                    }
                                
this->set(databaseHashMap);
    
}


public: TransformInfoHttp(HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= AbContext(propertiesHashMap, pageContext);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Properties HashMap: " +propertiesHashMap.toString(), this, "Constructor(HashMap, PageContext)");
    

                                    }
                                
this->set(propertiesHashMap);
    
}


public: TransformInfoHttp(TransformInfoHttp parentViewOfThisTransformInfoInterface){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abContext= AbContext(parentViewOfThisTransformInfoInterface.getPropertiesHashMap(), parentViewOfThisTransformInfoInterface.getPageContext());
    
}


                //@Throws(Exception.constructor)
            
    private: void set(HashMap<any, any> hashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Properties HashMap: " +hashMap.toString(), this, "set()");
    

                                    }
                                

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    
this->setName(hashMap.get(transformInfoData.NAME) as string);
    
this->setStoreName(hashMap.get(StoreFrontData::getInstance().NAME) as string);
    
this->setObjectFile(hashMap.get(transformInfoData.OBJECTFILENAME) as string);
    
this->setObject(hashMap.get(transformInfoData.OBJECT) as string);
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::string objectConfigString = hashMap.get(transformInfoData.OBJECTCONFIG) as string;;
    

                        if(stringValidationUtil.isValidRequired(objectConfigString, 10, AbSqlData::MAXBLOB))
                        
                                    {
                                    this->setObjectConfig(objectConfigString);
    

                                    }
                                
                        else {
                            this->setObjectConfig(TransformInfoObjectConfig(this).toString());
    

                        }
                            

                        if(!stringValidationUtil.isEmpty(hashMap.get(transformInfoData.OBJECTCONFIGFILENAME) as string))
                        
                                    {
                                    this->setObjectConfigFile(hashMap.get(transformInfoData.OBJECTCONFIGFILENAME) as string);
    

                                    }
                                
this->setTemplateFile(hashMap.get(transformInfoData.TEMPLATEFILENAME) as string);
    
this->setTemplate(hashMap.get(transformInfoData.TEMPLATE) as string);
    
this->setDataFile(hashMap.get(transformInfoData.DATAFILENAME) as string);
    
this->setData(hashMap.get(transformInfoData.DATA) as string);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF(this->log(), this, "set()");
    

                                    }
                                
}


    public: WeblisketSessionInterface getWeblisketSession(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext.getWeblisketSession();;
    
}


    public: PageContext getPageContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext.getPageContext();;
    
}


    public: HashMap<any, any> getPropertiesHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abContext.getPropertiesHashMap();;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH, this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getObjectConfigFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH, this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH, this->getDataFile());
    
}


};

            

