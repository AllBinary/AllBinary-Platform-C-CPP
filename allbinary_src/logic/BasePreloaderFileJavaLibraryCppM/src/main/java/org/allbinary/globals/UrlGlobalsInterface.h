
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H
        #define ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UrlGlobalsInterface
            : public Object
         {

                //@Throws(Exception.constructor)
            
    std::string getMainPath();

    std::string getTestHtmlPath();

    std::string getWebappPath();

    bool isTestingMode();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H
