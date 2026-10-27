
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class AbDataInputStream;
class AbDataOutputStream;
class AbFileLocalInputStream;
class DataOutputStreamFactory;
class AbFile;
class AbPath;
class StringUtil;
class DatabaseEncoder;
class WeakCrypt;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InstallerInfo
            : public virtual Object
         {

    private: static InstallerInfo* instance_owner();
    private: static InstallerInfo* instance;

    private: static inline const std::string INITFILENAME = "installerdata.dat";

    private: static const std::string PACKAGE;

    private: static std::string userName;

    private: static std::string password;

    private: static inline bool hasRead = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setHasRead(bool value);

    /*protected*/ public: LogUtil* logUtil;

public: InstallerInfo();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void read();

    public: void setUserName(std::string userName);

    public: void setPassword(std::string password);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void updateIfNeeded();

                //@Throws(Exception.constructor)
            
    public: std::string getUserName();

                //@Throws(Exception.constructor)
            
    public: std::string getPassword();

                //@Throws(Exception.constructor)
            
    public: bool isValid(std::string userName, std::string password);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H_COMPLETE
        #if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataInputStream.h>)
#include <org/allbinary/logic/io/AbDataInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileLocalInputStream.h>)
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
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

        #endif
    
