
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
        



        #ifndef TAGHELPERS_INVENTORYHELPERFACTORY_CPP
        #define TAGHELPERS_INVENTORYHELPERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "taghelpers/InventoryHelperFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "taghelpers/InventoryHelper.h"


InventoryHelperFactory::InventoryHelperFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(LicensingException.constructor)
            
    auto InventoryHelperFactory::getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) -> Object*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new InventoryHelper(hashMap, pageContext);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //TAGHELPERS_INVENTORYHELPERFACTORY_CPP
