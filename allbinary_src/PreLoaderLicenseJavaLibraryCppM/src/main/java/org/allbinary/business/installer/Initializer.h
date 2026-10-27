
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H

        
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
class HistoryDbInitInfo;
class InventoryDbInitInfo;
class LogDbInitInfo;
class StaticPagesDbInitInfo;
class UserDbInitInfo;
class StdUtil;
class LogUtil;
class StringMaker;
class StringValidationUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InitializerData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Initializer
            : public virtual Object
         {

    private: static inline const int32_t MAXDB = 30;

    private: static inline const int32_t MAX = 16;

    private: static inline const int32_t MIN = 4;

    private: static inline const int32_t MINPASSWORD = 0;

    /*protected*/ public: LogUtil* logUtil;

    private: std::string userJdbcDriver;

    private: std::string userName;

    private: std::string userUserName;

    private: std::string userPassword;

    private: std::string userSchema;

    private: std::string userServer;

    private: std::string userPort;

    private: std::string historyJdbcDriver;

    private: std::string historyName;

    private: std::string historyUserName;

    private: std::string historyPassword;

    private: std::string historySchema;

    private: std::string historyServer;

    private: std::string historyPort;

    private: std::string logJdbcDriver;

    private: std::string logName;

    private: std::string logUserName;

    private: std::string logPassword;

    private: std::string logSchema;

    private: std::string logServer;

    private: std::string logPort;

    private: std::string inventoryJdbcDriver;

    private: std::string inventoryName;

    private: std::string inventoryUserName;

    private: std::string inventoryPassword;

    private: std::string inventorySchema;

    private: std::string inventoryServer;

    private: std::string inventoryPort;

    private: std::string staticPagesJdbcDriver;

    private: std::string staticPagesName;

    private: std::string staticPagesUserName;

    private: std::string staticPagesPassword;

    private: std::string staticPagesSchema;

    private: std::string staticPagesServer;

    private: std::string staticPagesPort;

public: Initializer(Map* map);

public: Initializer(HashMap<Object*, Object*>* initHashMap);

    public: void getFormData(HashMap<Object*, Object*>* hashMap);

    private: bool isJdbcDriverValid(std::string jdbcDriverClassPathString);

    public: bool isValid();

    private: std::string getJdbcDriverValidationInfo(std::string jdbcDriver);

    private: std::string getJdbcDriverSolutionInfo();

    public: std::string getInvalidInfo();

                //@Throws(Exception.constructor)
            
    public: void set();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/business/init/db/HistoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/InventoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/LogDbInitInfo.h>)
#include <org/allbinary/business/init/db/LogDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/StaticPagesDbInitInfo.h>)
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
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
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/installer/InitializerData.h")
#include "org/allbinary/business/installer/InitializerData.h"
#endif

        #endif
    
