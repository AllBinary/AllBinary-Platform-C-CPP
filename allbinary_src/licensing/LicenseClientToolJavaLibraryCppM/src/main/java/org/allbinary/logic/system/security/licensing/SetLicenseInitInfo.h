
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_SETLICENSEINITINFO_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_SETLICENSEINITINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/InputStreamReader.h>

      
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayListD.h"
#include "PrintLicenseInitInfo.h"

class SetLicenseInitInfo
            : public Object
         {
        

    private: static stdinput: BufferedReader = new BufferedReader(new InputStreamReader(System.in));

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args);

    private: vector: BasicArrayList = new BasicArrayListD();

public constructor (std::vector<string> options);

                //@Throws(Exception.constructor)
            
    public LicenseInitInfo getLicenseInitInfo();

    public createNewLicenseInitInfo(BasicArrayList licenceServerVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_SETLICENSEINITINFO_H
