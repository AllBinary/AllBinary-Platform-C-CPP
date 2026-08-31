
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Item.h"

class ItemFactoryUnused
            : public Object
         {
        

                //@Throws(MoneyException.constructor)
            
    public static TableMappingInterface getInstance(HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Item(hashMap) as TableMappingInterface;
    
}


                //@Throws(Exception.constructor, MoneyException.constructor)
            
    public static TableMappingInterface getInstance(HttpServletRequest request){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Item(new RequestParams(request).toHashMap()) as TableMappingInterface;
    
}


private constructor (){

            super();
        }


};

            

