
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/InitializerData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InitializerData::InitializerData() {
        }
        auto InitializerData::instance_owner() -> InitializerData* { static std::unique_ptr<InitializerData> value(new InitializerData()); return value.get(); }
InitializerData* InitializerData::instance = InitializerData::instance_owner();

    auto InitializerData::getInstance() -> InitializerData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InitializerData::instance;
    
}


    auto InitializerData::getJdbcDriverSolutionInfo() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
    
stringBuffer->append("1. A JDBC driver you specified is not in your classpath.<br/>");
    
stringBuffer->append("Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
    
stringBuffer->append("Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
    
stringBuffer->append("Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
    
stringBuffer->append("2. The JDBC driver you specified does not exit.<br/>");
    
stringBuffer->append("Solution: Get a JDBC driver. <br/>");
    
stringBuffer->append("3. The JDBC driver you specified is not valid.<br/>");
    
stringBuffer->append("Solution: Use a valid JDBC driver.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATA_CPP
