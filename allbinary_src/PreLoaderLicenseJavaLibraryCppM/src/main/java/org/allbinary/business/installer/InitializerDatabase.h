
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DynamicInitDb.h"
#include "InitializerData.h"

class InitializerDatabase
            : public Object
         {
        

    private: static const MAXDB: int32_t = 30;

    private: static const MAX: int32_t = 16;

    private: static const MIN: int32_t = 4;

    private: static const MINPASSWORD: int32_t = 0;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: adminDbUserName: string;

    private: adminDbPassword: string;

    private: adminJdbcDriver: string;

    private: adminSchema: string;

    private: adminServer: string;

    private: adminPort: string;

    private: initDb: DynamicInitDb;

public constructor (AbeClientInformationInterface abeClientInformation, Map map);

public constructor (AbeClientInformationInterface abeClientInformation, HashMap<any, any> initHashMap);

    public getFormData(AbeClientInformationInterface abeClientInformation, HashMap<any, any> hashMap);

    bool isJdbcDriverValid(string jdbcDriverClassPathString);

    public bool isValid();

    string getJdbcDriverValidationInfo(string jdbcDriver);

    public string getInvalidInfo();

    public bool createUsers();

    public bool createDatabases();

    public bool createTables();

    public string getAdminDbUserName();

    public setAdminDbUserName(string adminDbUserName);

    public string getAdminDbPassword();

    public setAdminDbPassword(string adminDbPassword);

    public string getAdminJdbcDriver();

    public setAdminJdbcDriver(string adminJdbcDriver);

    public string getAdminSchema();

    public setAdminSchema(string adminSchema);

    public string getAdminServer();

    public setAdminServer(string adminServer);

    public string getAdminPort();

    public setAdminPort(string adminPort);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_H
