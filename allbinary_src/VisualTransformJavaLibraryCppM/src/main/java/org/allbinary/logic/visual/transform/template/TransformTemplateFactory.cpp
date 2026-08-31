
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

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformTemplateInterface.h"

class TransformTemplateFactory
            : public Object
         {
        

    private: static const instance: TransformTemplateFactory = new TransformTemplateFactory();

    public static TransformTemplateFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformTemplateFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public TransformTemplateInterface getInstance(AbeClientInformationInterface abeClientInformation, string templateName, HashMap<any, any> propertiesHashMap, PageContext pageContext){

        try {
            
    transformInfoEntity: TransformInfoEntity = TransformInfoEntityBuilder.getInstance()!;;
    

    transformInfoInterface: TransformInfoInterface = transformInfoEntity!.get(templateName, propertiesHashMap, pageContext)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectFactory.getInstance()!.getInstance(abeClientInformation, transformInfoInterface) as TransformTemplateInterface;
    

                //: 
} catch(e) 
            {

    error: string = "Failed To Get Instance";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORYERROR))
                        
                                    {
                                    this.logUtil!.put(error +templateName +"->TemplateFactory", this, "getInstance(viewName, HashMap, PageContext)", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

