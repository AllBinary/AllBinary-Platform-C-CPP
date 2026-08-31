
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpContext.h"
#include "TransformInfoInterface.h"
#include "TransformInfoHttpStore.h"

class TransformInfoHttpFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static TransformInfoInterface getInstance(HashMap<any, any> propertiesHashMap, PageContext pageContext){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    weblisketSession: WeblisketSession = new WeblisketSession(propertiesHashMap, pageContext);;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(weblisketSession!.getStoreName()))
                        
                                    {
                                    
    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(weblisketSession!.getStoreName())!;;
    

                        if(storeFrontInterface != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TransformInfoHttpStore(storeFrontInterface, propertiesHashMap, pageContext) as TransformInfoInterface;
    

                                    }
                                
                        else {
                            


                            throw new Exception("No StoreFront with: " +weblisketSession!.getStoreName());
                    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TransformInfoHttpContext(propertiesHashMap, pageContext) as TransformInfoInterface;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, "TransformInfoFactory", commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


private constructor (){

            super();
        }


};

            

