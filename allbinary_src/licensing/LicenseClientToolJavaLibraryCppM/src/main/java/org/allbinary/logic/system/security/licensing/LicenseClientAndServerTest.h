
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSECLIENTANDSERVERTEST_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSECLIENTANDSERVERTEST_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayListD.h"
#include "PrintLicenseInitInfo.h"
#include "AbeClientInformationInterfaceFactory.h"
#include "AbeClientInformationInterface.h"
#include "AbeLicenseInterface.h"

class LicenseClientAndServerTest
            : public Object
         {

    public: static void main(std::vector<std::string> args);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList vector = BasicArrayListD();

public: LicenseClientAndServerTest(std::vector<std::string> options);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void test();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSECLIENTANDSERVERTEST_H
