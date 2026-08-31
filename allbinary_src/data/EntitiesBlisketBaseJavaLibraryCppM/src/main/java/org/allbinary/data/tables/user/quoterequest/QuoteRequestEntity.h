
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITY_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "QuoteRequestEntityInterface.h"

class QuoteRequestEntity: public AbSqlBean: public QuoteRequestEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tableName: string = "quoterequest";

public constructor ();

    public insert(Vector values);

                //@Throws(Exception.constructor)
            
    public QuoteRequest get(string userName, int32_t id);

    public Vector getIds(string userName);

    public deleteWhere(string key, string value);

    public string createTableStatement();

    public string createTable();

    public string dropTable();

    public update(string userName, HashMap<any, any> updatedValues);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITY_H
