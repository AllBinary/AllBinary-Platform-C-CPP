
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_SALES_AFFILIATESALESENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_SALES_AFFILIATESALESENTITYINTERFACE_H

#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AffiliateSalesEntityInterface: public BasicDataTableInterface {
        

    delete(string value);

    insert(Vector values);

    update(HashMap<any, any> updatedValues);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_SALES_AFFILIATESALESENTITYINTERFACE_H
