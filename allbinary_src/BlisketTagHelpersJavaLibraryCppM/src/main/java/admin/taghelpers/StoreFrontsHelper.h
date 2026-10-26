
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTSHELPER_H
        #define ADMIN_TAGHELPERS_STOREFRONTSHELPER_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/select/HtmlSelect.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTable.h"

class StoreFrontsHelper: public BasicTable {

    private: static const std::string CLASS = "class";

    private: static const std::string TEXT = "text";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Portion portion;

public: StoreFrontsHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext);

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

    private: const CommonPhoneStrings commonPhoneStrings = CommonPhoneStrings::getInstance();

    public: std::string generateSelect();

};

            


        #endif //ADMIN_TAGHELPERS_STOREFRONTSHELPER_H
