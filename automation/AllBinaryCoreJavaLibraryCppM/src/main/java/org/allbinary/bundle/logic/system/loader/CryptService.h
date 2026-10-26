
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
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/globals/Globals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>

      
#include <org/allbinary/gui/dialog/ExitCloseListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/AbCryptUtil.h>

      
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeNoLicense.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CryptService
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const AbCryptUtil abCryptUtil = AbCryptUtil::getInstance();

public: CryptService();

    public: InputStream getDecryptedInputStream(AbeClientInformationInterface abeClientInformation, std::string name, InputStream inputStream);

    private: void showLicenseDialog(AbeClientInformationInterface abeClientInformation, Exception e);

};

            


        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICE_H
