
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontsEntityInterface.h"

class StoreFrontsEntity: public AbSqlBean: public StoreFrontsEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "storefronts";

public constructor ();

    public insert(Vector values);

    public delete(string value);

                //@Throws(Exception.constructor)
            
    public StoreFront getStoreFrontInterface(string name);

    public Vector getStoreFrontNames();

    public update(HashMap<any, any> updatedValues);

    public string createTableStatement();

    public string createTable();

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_H
