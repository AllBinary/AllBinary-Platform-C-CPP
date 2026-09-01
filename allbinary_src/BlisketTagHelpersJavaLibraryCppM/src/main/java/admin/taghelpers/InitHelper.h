
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
        



        #ifndef ADMIN_TAGHELPERS_INITHELPER_H
        #define ADMIN_TAGHELPERS_INITHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/init/InitInfoEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTable.h"

class InitHelper: public BasicTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InitHelper(HashMap<any, any> hashMap, PageContext pageContext);

    public: std::string drop();

    public: std::string create();

    public: std::string view();

    public: std::string restore();

    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_INITHELPER_H
