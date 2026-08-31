
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/LogDbInitInfo.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitializerData.h"

class Initializer
            : public Object
         {
        

    private: static const MAXDB: int32_t = 30;

    private: static const MAX: int32_t = 16;

    private: static const MIN: int32_t = 4;

    private: static const MINPASSWORD: int32_t = 0;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userJdbcDriver: string;

    private: userName: string;

    private: userUserName: string;

    private: userPassword: string;

    private: userSchema: string;

    private: userServer: string;

    private: userPort: string;

    private: historyJdbcDriver: string;

    private: historyName: string;

    private: historyUserName: string;

    private: historyPassword: string;

    private: historySchema: string;

    private: historyServer: string;

    private: historyPort: string;

    private: logJdbcDriver: string;

    private: logName: string;

    private: logUserName: string;

    private: logPassword: string;

    private: logSchema: string;

    private: logServer: string;

    private: logPort: string;

    private: inventoryJdbcDriver: string;

    private: inventoryName: string;

    private: inventoryUserName: string;

    private: inventoryPassword: string;

    private: inventorySchema: string;

    private: inventoryServer: string;

    private: inventoryPort: string;

    private: staticPagesJdbcDriver: string;

    private: staticPagesName: string;

    private: staticPagesUserName: string;

    private: staticPagesPassword: string;

    private: staticPagesSchema: string;

    private: staticPagesServer: string;

    private: staticPagesPort: string;

public constructor (Map map);

public constructor (HashMap<any, any> initHashMap);

    public getFormData(HashMap<any, any> hashMap);

    bool isJdbcDriverValid(string jdbcDriverClassPathString);

    public bool isValid();

    string getJdbcDriverValidationInfo(string jdbcDriver);

    string getJdbcDriverSolutionInfo();

    public string getInvalidInfo();

                //@Throws(Exception.constructor)
            
    public set();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_H
