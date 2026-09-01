
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
        



        #ifndef ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_H
        #define ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomLoaderHelper
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: CustomLoaderHelper(HashMap<any, any> hashMap, PageContext pageContext);

public: CustomLoaderHelper();

                //@Throws(Exception.constructor)
            
    public: std::string getWebappPath();

                //@Throws(Exception.constructor)
            
    public: void setWebappPath(std::string path);

};

            


        #endif //ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_H
