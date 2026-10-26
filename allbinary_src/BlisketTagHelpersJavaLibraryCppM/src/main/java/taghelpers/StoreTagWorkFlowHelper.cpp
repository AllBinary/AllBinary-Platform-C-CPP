
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
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h>

      
#include <org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreTagWorkFlowHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: StoreWorkFlowInterface storeWorkFlowInterface;

public: StoreTagWorkFlowHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Properties: " +hashMap.toString(), this, "StoreTagWorkFlowHelper()");
    

                                    }
                                
this->storeWorkFlowInterface= StoreTagWorkFlowFactory::getInstance().getInstance(this->abeClientInformation, hashMap, pageContext);
    
}


                //@Throws(Exception.constructor)
            
    public: Integer process(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPER))
                        
                                    {
                                    this->logUtil.putF("Process", this, this->commonStrings.PROCESS);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeWorkFlowInterface.process();;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to process workflow: ";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

