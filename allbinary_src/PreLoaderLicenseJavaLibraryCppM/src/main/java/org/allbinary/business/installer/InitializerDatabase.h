
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
class DatabaseConnectionInfoInterface;
class DbConnectionInfo;
class StdUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DynamicInitDb;
class InitializerData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitializerDatabase
            : public virtual Object
         {

    private: static inline const int32_t MAXDB = 30;

    private: static inline const int32_t MAX = 16;

    private: static inline const int32_t MIN = 4;

    private: static inline const int32_t MINPASSWORD = 0;

    /*protected*/ public: LogUtil* logUtil;

    private: std::string adminDbUserName;

    private: std::string adminDbPassword;

    private: std::string adminJdbcDriver;

    private: std::string adminSchema;

    private: std::string adminServer;

    private: std::string adminPort;

    private: DynamicInitDb* initDb;

public: InitializerDatabase(AbeClientInformationInterface* abeClientInformation, Map* map);

public: InitializerDatabase(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* initHashMap);

    public: void getFormData(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* hashMap);

    private: bool isJdbcDriverValid(std::string jdbcDriverClassPathString);

    public: bool isValid();

    private: std::string getJdbcDriverValidationInfo(std::string jdbcDriver);

    public: std::string getInvalidInfo();

    public: bool createUsers();

    public: bool createDatabases();

    public: bool createTables();

    public: std::string getAdminDbUserName();

    public: void setAdminDbUserName(std::string adminDbUserName);

    public: std::string getAdminDbPassword();

    public: void setAdminDbPassword(std::string adminDbPassword);

    public: std::string getAdminJdbcDriver();

    public: void setAdminJdbcDriver(std::string adminJdbcDriver);

    public: std::string getAdminSchema();

    public: void setAdminSchema(std::string adminSchema);

    public: std::string getAdminServer();

    public: void setAdminServer(std::string adminServer);

    public: std::string getAdminPort();

    public: void setAdminPort(std::string adminPort);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/installer/DynamicInitDb.h")
#include "org/allbinary/business/installer/DynamicInitDb.h"
#endif
#if __has_include("org/allbinary/business/installer/InitializerData.h")
#include "org/allbinary/business/installer/InitializerData.h"
#endif

        #endif
    
