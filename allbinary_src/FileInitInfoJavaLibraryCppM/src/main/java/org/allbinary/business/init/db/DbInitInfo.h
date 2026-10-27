
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class HttpData;
class PreLogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class AbDataInputStream;
class AbDataOutputStream;
class AbFileInputStream;
class DataOutputStreamFactory;
class StreamUtil;
class AbFile;
class Directory;
class AbPath;
class StringUtil;
class DatabaseEncoder;
class WeakCrypt;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DbConnectionInfo.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DbInitInfo: public DbConnectionInfo {

    private: CommonStrings* commonStrings;

    private: Directory* directory;

    private: HttpData* httpData;

    private: const std::string GET_URL = "getUrl";

    private: const std::string PACKAGE;

    private: std::string initFileName;

    private: bool hasRead = false;

public: DbInitInfo(std::string initFileName, bool read);

    public: std::string getUrl();

                //@Throws(Exception.constructor)
            
    public: void write();

                //@Throws(Exception.constructor)
            
    private: void load();

    public: void setHasRead(bool value);

    private: void updateIfNeeded();

    public: std::string getName();

    public: std::string getUserName();

    public: std::string getPassword();

    public: std::string getSchema();

    public: std::string getServer();

    public: std::string getPort();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H_COMPLETE
        #if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/HttpData.h>)
#include <org/allbinary/logic/communication/http/HttpData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataInputStream.h>)
#include <org/allbinary/logic/io/AbDataInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>)
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/WeakCrypt.h>)
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/init/db/DbConnectionInfo.h")
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#endif

        #endif
    
