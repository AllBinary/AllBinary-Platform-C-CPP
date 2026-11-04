
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/lang/reflect/Method.h>
class DbConnectionInfo;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Warning you must have sql root access
class InitDb
            : public virtual Object
         {

    private: Object* anyType;

    private: const std::string METHOD_CALL_GET_HOST_NAME = "getHostName";

    private: const std::string METHOD_CALL_ADD_USERS = "addUsers";

    private: const std::string METHOD_CALL_ADD_DATABASES = "addDatabases";

    private: const std::string METHOD_CALL_ADD_TABLES = "addTables";

    private: const std::string METHOD_CALL_TEMP_MAIN_PATH = "useTemporaryMainPath";

    private: const std::string METHOD_CALL_MAIN_PATH = "useNormalMainPath";

public: InitDb();

public: InitDb(DbConnectionInfo* dbConnectionInfo);

    /*protected*/ public: void setHelper(Object* anyType);
    /*protected*/ public: void setHelper(const std::string& anyType) { return setHelper(JavaString::box(anyType)); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setHelper(BoxValue anyType) { return setHelper(JavaBoxes::toObject(anyType)); }
    /*protected*/ public: template<typename BoxElement> void setHelper(const std::vector<BoxElement>& anyType) { return setHelper(JavaBoxes::toObject(anyType)); }

    /*protected*/ public: Object* getHelper();

    private: std::string getHostName();

    public: bool addUsers();

    public: bool addDatabases();

    public: bool addTables();

    public: bool useTemporaryMainPath();

    public: bool useNormalMainPath();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif

        #endif
    
