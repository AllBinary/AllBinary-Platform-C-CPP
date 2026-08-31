
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PermissionItemsEntity.h"

class PermissionItemsEntityFactory
            : public Object
         {
        

    private: static const instance: PermissionItemsEntityFactory = new PermissionItemsEntityFactory();

    public static PermissionItemsEntityFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PermissionItemsEntityFactory.instance;
    
}


    public static PermissionItemsEntity getPermissionItemsEntityInstance(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new org.allbinary.data.tables.user.commerce.inventory.item.permissions.PermissionItemsEntity();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.ENTITYFACTORYERROR))
                        
                                    {
                                    logUtil!.put(commonStrings!.EXCEPTION, "PermissionItemsEntityFactory", commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


};

            

