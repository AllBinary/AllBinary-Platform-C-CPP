
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access
class InitDb
            : public Object
         {
        

    private: anyType: any;

    private: const METHOD_CALL_GET_HOST_NAME: string = "getHostName";

    private: const METHOD_CALL_ADD_USERS: string = "addUsers";

    private: const METHOD_CALL_ADD_DATABASES: string = "addDatabases";

    private: const METHOD_CALL_ADD_TABLES: string = "addTables";

    private: const METHOD_CALL_TEMP_MAIN_PATH: string = "useTemporaryMainPath";

    private: const METHOD_CALL_MAIN_PATH: string = "useNormalMainPath";

public constructor ();

public constructor (DbConnectionInfo dbConnectionInfo);

    setHelper(any = {} anyType);

    any getHelper();

    string getHostName();

    public bool addUsers();

    public bool addDatabases();

    public bool addTables();

    public bool useTemporaryMainPath();

    public bool useNormalMainPath();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDB_H
