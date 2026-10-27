
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class EntryData;
class UserDbInitInfo;
class UserData;
class StreetAddress;
class StreetAddressData;
class TableDataFactory;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StreetAddressesEntity: public AbSqlBean, public StreetAddressesEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string userName;

public: StreetAddressesEntity();

public: StreetAddressesEntity(std::string userName);

    public: void remove(int32_t index);

    public: void add(StreetAddress* address);

    private: void add(StreetAddress* address, std::string index);

    public: void update(StreetAddress* address);

    public: std::string getLastId();

    public: BasicArrayList* get();

    public: StreetAddress* get(int32_t index);

    public: StreetAddress* getDefault();

    public: void setDefault(std::string value);

    /*protected*/ public: std::string getUserName();

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string drop();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddressData.h>)
#include <org/allbinary/business/user/address/StreetAddressData.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableDataFactory.h>)
#include <org/allbinary/data/tables/TableDataFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h")
#include "org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h"
#endif

        #endif
    
