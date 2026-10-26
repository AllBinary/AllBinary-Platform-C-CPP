
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInterface.h"

class TransformFactory
            : public Object
         {

    private: static TransformFactory instance() { return TransformFactory(); }

    public: static TransformFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformFactory(){
}


    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: TransformInterface getInstance(AbeClientInformationInterface abeClientInformation, std::string viewName, TransformInfoInterface ownerTransformInfoInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Creating Transform: " +viewName, this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                

    TransformInfoHttpInterface ownerTransformInfoHttpInterface = ownerTransformInfoInterface;;
    

    TransformInfoEntity transformInfoEntity = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoInterface transformInfoInterface = transformInfoEntity.get(viewName, ownerTransformInfoHttpInterface.getPropertiesHashMap(), ownerTransformInfoHttpInterface.getPageContext());;
    

                        if(transformInfoInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Such View In DB: " +viewName);
                    

                                    }
                                
transformInfoInterface.setChild();
    

    Object* anyType = TransformInfoObjectFactory::getInstance().getInstance(abeClientInformation, transformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Created Transform: " +viewName, this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, this->commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: TransformInterface getInstance(AbeClientInformationInterface abeClientInformation, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext){

        try {
            
    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Creating Transform: " +propertiesHashMap.get(transformInfoData.NAME), this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                

    TransformInfoEntity transformInfoEntity = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoInterface transformInfoInterface = transformInfoEntity.get(propertiesHashMap.get(transformInfoData.NAME), propertiesHashMap, pageContext);;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    transformInfoInterface.override(propertiesHashMap);
    

                                    }
                                
                        else {
                            transformInfoInterface= TransformInfoHttpFactory::getInstance(propertiesHashMap, pageContext);
    

                        }
                            

    Object* anyType = TransformInfoObjectFactory::getInstance().getInstance(abeClientInformation, transformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Created Transform: " +propertiesHashMap.get(transformInfoData.NAME), this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Failed To Get Instance: ");
    
stringBuffer.append(propertiesHashMap.get(TransformInfoData::getInstance().NAME));
    
stringBuffer.append("->TransformFactory");
    
this->logUtil.put(stringBuffer.toString(), this, this->commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: TransformInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Creating Transform: " +transformInfoInterface.getName(), this, "getInstance(TransformInfoInterface)");
    

                                    }
                                

    Object* anyType = TransformInfoObjectFactory::getInstance().getInstance(abeClientInformation, transformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF("Created Transform: " +transformInfoInterface.getName(), this, "getInstance(TransformInfoInterface)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(TransformInfoInterface)", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

