
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayEntity.h"

class PaymentGatewayEntityFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static PaymentGatewayEntity getInstance(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org::allbinary::data::tables::user::commerce::money::payment::gateway::PaymentGatewayEntity();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    logUtil.put(commonStrings.EXCEPTION, "PaymentGatewayEntityFactory", commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


private: PaymentGatewayEntityFactory(){
}


};

            

