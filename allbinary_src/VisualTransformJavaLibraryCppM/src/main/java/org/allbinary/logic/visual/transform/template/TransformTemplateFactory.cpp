
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h"

class TransformTemplateFactory
            : public Object
         {

    private: static TransformTemplateFactory* instance() { static std::unique_ptr<TransformTemplateFactory> value(new TransformTemplateFactory()); return value.get(); }

    public: static TransformTemplateFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformTemplateFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: TransformTemplateFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformTemplateInterface* getInstance(AbeClientInformationInterface* abeClientInformation, std::string templateName, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext){

        try {
            
    TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoInterface* transformInfoInterface = transformInfoEntity->get(templateName, propertiesHashMap, pageContext);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformTemplateInterface*>(TransformInfoObjectFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface));
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed To Get Instance";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(error +templateName +"->TemplateFactory", this, "getInstance(viewName, HashMap, PageContext)", &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

