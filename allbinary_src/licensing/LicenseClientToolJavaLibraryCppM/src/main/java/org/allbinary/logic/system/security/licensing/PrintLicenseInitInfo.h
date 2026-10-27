
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
class LicenseInitInfo;
class LicenseInitInfoUtil;
class FileFactory;
class PATH_GLOBALS;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PrintLicenseInitInfo
            : public virtual Object
         {

    public: static inline const std::string PATH = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

public: PrintLicenseInitInfo(std::vector<std::string> options);

                //@Throws(Exception.constructor)
            
    public: LicenseInitInfo* getLicenseInitInfo();

    public: void printInitInfo();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/LicenseInitInfo.h>)
#include <org/allbinary/business/init/LicenseInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/LicenseInitInfoUtil.h>)
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileFactory.h>)
#include <org/allbinary/logic/io/file/FileFactory.h>
#endif
#if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
