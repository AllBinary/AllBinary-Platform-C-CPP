
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
        



        #ifndef ADMIN_TAGHELPERS_LOGHELPER_H
        #define ADMIN_TAGHELPERS_LOGHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/data/tables/log/LogTableEntity.h>

      
#include <org/allbinary/data/tables/log/LogTableEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTable.h"

class LogHelper: public BasicTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const portion: Portion;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    public string drop();

    public string create();

    public string restore();

    public string backup();

};

            


        #endif //ADMIN_TAGHELPERS_LOGHELPER_H
