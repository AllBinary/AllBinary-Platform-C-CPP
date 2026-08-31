
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H

            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UrlGlobalsInterface.h"
//implements
class AppUrlGlobals: public UrlGlobalsInterface {
        

    public static const NULL_APP_URL_GLOBALS: AppUrlGlobals = new AppUrlGlobals();

    private: path: string = StringUtil.getInstance()!.EMPTY_STRING;

    public bool isTestingMode();

    public string getWebappPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setWebappPath(string path);

    public string getTestHtmlPath();

                //@Throws(Exception.constructor)
            
    public string getMainPath();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
