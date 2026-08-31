
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H

            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/business/init/InitInfo.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UrlGlobalsInterface.h"

class WebAppUrlGlobals: public UrlGlobalsInterface {
        

    private: path: string;

    private: isWebappPathSet: bool = false;

    public bool isTestingMode();

    public string getWebappPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setWebappPath(string path);

    public string getTestHtmlPath();

                //@Throws(Exception.constructor)
            
    public string getMainPath();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_H
