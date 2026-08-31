
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StaticPagesEntityInterface.h"

class StaticPagesEntity: public AbSqlBean: public StaticPagesEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const TABLENAME: string = "staticpages";

public constructor ();

    public insert(Vector values);

    public string getFile(string store, string keywords);

    public delete(string keywords);

    public string dropTable();

    public update(HashMap<any, any> updatedValues);

    public string createTableStatement();

    public string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H
