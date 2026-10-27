
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"

class URLGLOBALS
            : public Object
         {

    private: static inline UrlGlobalsInterface* urlGlobalsInterface = AppUrlGlobals::NULL_APP_URL_GLOBALS;

    public: static void init(UrlGlobalsInterface* urlGlobalsInterface){
URLGLOBALS::urlGlobalsInterface= urlGlobalsInterface;
    
}


    public: static bool isTestingMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->isTestingMode();;
    
}


    public: static std::string getWebappPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getWebappPath();;
    
}


    public: static std::string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getTestHtmlPath();;
    
}


                //@Throws(Exception.constructor)
            
    public: static std::string getMainPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return URLGLOBALS::urlGlobalsInterface->getMainPath();;
    
}


};

            

