
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/HttpData.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DbConnectionInfo.h"

class DbInitInfo: public DbConnectionInfo {
        

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const httpData: HttpData = HttpData.getInstance()!;

    private: const GET_URL: string = "getUrl";

    private: const PACKAGE: string = FREEBLISKET_PATH_GLOBALS.getInstance()!.DBINITPATH;

    private: initFileName: string;

    private: hasRead: bool = false;

public constructor (string initFileName, bool read);

    public string getUrl();

                //@Throws(Exception.constructor)
            
    public write();

                //@Throws(Exception.constructor)
            
    load();

    public setHasRead(bool value);

    updateIfNeeded();

    public string getName();

    public string getUserName();

    public string getPassword();

    public string getSchema();

    public string getServer();

    public string getPort();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H
