
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_URLGLOBALS_CPP
        #define ORG_ALLBINARY_GLOBALS_URLGLOBALS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/globals/URLGLOBALS.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"


URLGLOBALS::URLGLOBALS() {
        }
        UrlGlobalsInterface* URLGLOBALS::urlGlobalsInterface = AppUrlGlobals::NULL_APP_URL_GLOBALS;

    auto URLGLOBALS::init(UrlGlobalsInterface* urlGlobalsInterface) -> void{
URLGLOBALS::urlGlobalsInterface= urlGlobalsInterface;
    
}


    auto URLGLOBALS::isTestingMode() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->isTestingMode();;
    
}


    auto URLGLOBALS::getWebappPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getWebappPath();;
    
}


    auto URLGLOBALS::getTestHtmlPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getTestHtmlPath();;
    
}


                //@Throws(Exception.constructor)
            
    auto URLGLOBALS::getMainPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getMainPath();;
    
}




        #endif //ORG_ALLBINARY_GLOBALS_URLGLOBALS_CPP
