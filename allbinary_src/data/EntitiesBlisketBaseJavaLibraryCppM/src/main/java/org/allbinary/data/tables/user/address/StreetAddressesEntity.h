
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StreetAddressesEntityInterface.h"

class StreetAddressesEntity: public AbSqlBean: public StreetAddressesEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userName: string;

public constructor ();

public constructor (string userName);

    public remove(Integer index);

    public add(StreetAddress address);

    add(StreetAddress address, string index);

    public update(StreetAddress address);

    public string getLastId();

    public Vector get();

    public StreetAddress get(Integer index);

    public StreetAddress getDefault();

    public setDefault(string value);

    string getUserName();

    public string createTableStatement();

    public string createTable();

    public string drop();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H
