
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InstallerInfo
            : public Object
         {
        

    private: static const instance: InstallerInfo = new InstallerInfo();

    private: static const INITFILENAME: string = "installerdata.dat";

    private: static const PACKAGE: string = PATH_GLOBALS.getInstance()!.INIT_PATH;

    private: static userName: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: static password: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: static hasRead: bool = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static setHasRead(bool value);

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public write();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    read();

    public setUserName(string userName);

    public setPassword(string password);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    updateIfNeeded();

                //@Throws(Exception.constructor)
            
    public string getUserName();

                //@Throws(Exception.constructor)
            
    public string getPassword();

                //@Throws(Exception.constructor)
            
    public bool isValid(string userName, string password);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_H
