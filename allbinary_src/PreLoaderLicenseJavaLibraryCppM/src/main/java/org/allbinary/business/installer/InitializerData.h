
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitializerData
            : public Object
         {

    private: static InitializerData* instance() { static std::unique_ptr<InitializerData> value(new InitializerData()); return value.get(); }

    public: static InitializerData* getInstance();

    public: const std::string DBUSER = "DBUSER";

    public: const std::string DBPASSWORD = "DBPASSWORD";

    public: const std::string ADMINJDBCDRIVER = "ADMIN_JDBCDRIVER";

    public: const std::string ADMINSCHEMA = "ADMINSCHEMA";

    public: const std::string ADMINSERVER = "ADMINSERVER";

    public: const std::string ADMINPORT = "ADMINPORT";

    public: const std::string CUSTOMERJDBCDRIVER = "CUSTOMER_JDBCDRIVER";

    public: const std::string CUSTOMERNAME = "CUSTOMERNAME";

    public: const std::string CUSTOMERUSERNAME = "CUSTOMERUSERNAME";

    public: const std::string CUSTOMERPASSWORD = "CUSTOMERPASSWORD";

    public: const std::string CUSTOMERSCHEMA = "CUSTOMERSCHEMA";

    public: const std::string CUSTOMERSERVER = "CUSTOMERSERVER";

    public: const std::string CUSTOMERPORT = "CUSTOMERPORT";

    public: const std::string HISTORYJDBCDRIVER = "HISTORY_JDBCDRIVER";

    public: const std::string HISTORYNAME = "HISTORYNAME";

    public: const std::string HISTORYUSERNAME = "HISTORYUSERNAME";

    public: const std::string HISTORYPASSWORD = "HISTORYPASSWORD";

    public: const std::string HISTORYSCHEMA = "HISTORYSCHEMA";

    public: const std::string HISTORYSERVER = "HISTORYSERVER";

    public: const std::string HISTORYPORT = "HISTORYPORT";

    public: const std::string LOGJDBCDRIVER = "LOG_JDBCDRIVER";

    public: const std::string LOGNAME = "LOGNAME";

    public: const std::string LOGUSERNAME = "LOGUSERNAME";

    public: const std::string LOGPASSWORD = "LOGPASSWORD";

    public: const std::string LOGSCHEMA = "LOGSCHEMA";

    public: const std::string LOGSERVER = "LOGSERVER";

    public: const std::string LOGPORT = "LOGPORT";

    public: const std::string INVENTORYJDBCDRIVER = "INVENTORY_JDBCDRIVER";

    public: const std::string INVENTORYNAME = "INVENTORYNAME";

    public: const std::string INVENTORYUSERNAME = "INVENTORYUSERNAME";

    public: const std::string INVENTORYPASSWORD = "INVENTORYPASSWORD";

    public: const std::string INVENTORYSCHEMA = "INVENTORYSCHEMA";

    public: const std::string INVENTORYSERVER = "INVENTORYSERVER";

    public: const std::string INVENTORYPORT = "INVENTORYPORT";

    public: const std::string STATICPAGESJDBCDRIVER = "STATICPAGES_JDBCDRIVER";

    public: const std::string STATICPAGESNAME = "STATICPAGESNAME";

    public: const std::string STATICPAGESUSERNAME = "STATICPAGESUSERNAME";

    public: const std::string STATICPAGESPASSWORD = "STATICPAGESPASSWORD";

    public: const std::string STATICPAGESSCHEMA = "STATICPAGESSCHEMA";

    public: const std::string STATICPAGESSERVER = "STATICPAGESSERVER";

    public: const std::string STATICPAGESPORT = "STATICPAGESPORT";

    public: std::string getJdbcDriverSolutionInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_H
