
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseInitInfo.h"

class LicenseInitInfoUtil
            : public Object
         {

    private: static LicenseInitInfoUtil instance() { return LicenseInitInfoUtil(); }

    public: static LicenseInitInfoUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    public: const std::string INITFILENAME = "licenseinitdata.dat";

    public: const std::string ABOUT = "about";

    public: const std::string PRIVACY_POLICY = "privacy_policy";

    private: std::string filePath = this->stringUtil.EMPTY_STRING;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFilePath(std::string filePath);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(LicenseInitInfo initData);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo read();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo readAgain(int32_t initializeCounter);

    public: std::string getFilePath();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
