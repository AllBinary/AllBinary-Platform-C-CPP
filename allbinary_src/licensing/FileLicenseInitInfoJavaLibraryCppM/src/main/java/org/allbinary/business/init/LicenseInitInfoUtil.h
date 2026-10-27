
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TsUtil;
class PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class AbDataInputStream;
class AbDataOutputStream;
class AbFileInputStream;
class DataOutputStreamFactory;
class FileStreamFactory;
class StringMaker;
class StringUtil;
class DatabaseEncoder;
class WeakCrypt;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LicenseInitInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LicenseInitInfoUtil
            : public virtual Object
         {

    private: static LicenseInitInfoUtil* instance_owner();
    private: static LicenseInitInfoUtil* instance;

    public: static LicenseInitInfoUtil* getInstance();


            
    public: LicenseInitInfoUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: StringUtil* stringUtil;

    public: const std::string INITFILENAME = "licenseinitdata.dat";

    public: const std::string ABOUT = "about";

    public: const std::string PRIVACY_POLICY = "privacy_policy";

    private: std::string filePath;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFilePath(std::string filePath);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(LicenseInitInfo* initData);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo* read();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo* readAgain(int32_t initializeCounter);

    public: std::string getFilePath();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
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
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/FileStreamFactory.h>)
#include <org/allbinary/logic/io/FileStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/business/init/LicenseInitInfo.h")
#include "org/allbinary/business/init/LicenseInitInfo.h"
#endif

        #endif
    
