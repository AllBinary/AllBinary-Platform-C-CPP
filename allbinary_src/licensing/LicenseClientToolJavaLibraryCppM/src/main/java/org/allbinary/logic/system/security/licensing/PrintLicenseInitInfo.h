
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/System.h"
        
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PrintLicenseInitInfo
            : public Object
         {
        

    public static const PATH: string = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args);

public constructor (std::vector<string> options);

                //@Throws(Exception.constructor)
            
    public LicenseInitInfo getLicenseInitInfo();

    public printInitInfo();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H
