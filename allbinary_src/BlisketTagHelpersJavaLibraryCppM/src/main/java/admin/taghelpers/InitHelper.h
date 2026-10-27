
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class InitInfoEntity;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitHelper: public BasicTable {

    /*protected*/ public: LogUtil* logUtil;

public: InitHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string drop();

    public: std::string create();

    public: std::string view();

    public: std::string restore();

    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_INITHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_INITHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_INITHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/init/InitInfoEntity.h>)
#include <org/allbinary/business/init/InitInfoEntity.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("admin/taghelpers/BasicTable.h")
#include "admin/taghelpers/BasicTable.h"
#endif

        #endif
    
