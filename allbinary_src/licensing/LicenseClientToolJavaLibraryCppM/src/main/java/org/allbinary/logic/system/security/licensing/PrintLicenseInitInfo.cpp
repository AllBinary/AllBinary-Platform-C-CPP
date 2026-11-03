
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/PrintLicenseInitInfo.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PrintLicenseInitInfo::PrintLicenseInitInfo(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance()->setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance()->INIT_PATH);
    
}


                //@Throws(Exception.constructor)
            
    auto PrintLicenseInitInfo::getLicenseInitInfo() -> LicenseInitInfo*{

    LicenseInitInfoUtil* licenseInitInfoUtil = LicenseInitInfoUtil::getInstance();;
    

                        if(FileFactory::getInstance()->isFile(licenseInitInfoUtil->getFilePath()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return licenseInitInfoUtil->read();;
    

                                    }
                                
                        else {
                            System.out.println(JavaString::valueOf("No Licence File at: ") +JavaString::valueOf(licenseInitInfoUtil->getFilePath()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new LicenseInitInfo();
    

                        }
                            
}


    auto PrintLicenseInitInfo::printInitInfo() -> void{

        try {
            
    LicenseInitInfo* licenseInitInfo = this->getLicenseInitInfo();;
    
System.out.println(JavaString::valueOf("License ID: ") +JavaString::valueOf(licenseInitInfo->getLicenseId()));
    

    BasicArrayList* list = licenseInitInfo->getServerList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
System.out.println(JavaString::valueOf("Lic Serv: ") +JavaString::valueOf(list->get(index)));
    
}


                //: 
} catch(Exception& e) 
            {
System.out.print(JavaString::valueOf("Error: ") +JavaString::valueOf(e));
    
e.printStackTrace();
    
}

}


                //@Throws(Exception.constructor)
            
    auto PrintLicenseInitInfo::main(std::vector<std::string> args) -> void{

    PrintLicenseInitInfo* initInfo = new PrintLicenseInitInfo(args);;
    
initInfo->printInitInfo();
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PRINTLICENSEINITINFO_CPP
