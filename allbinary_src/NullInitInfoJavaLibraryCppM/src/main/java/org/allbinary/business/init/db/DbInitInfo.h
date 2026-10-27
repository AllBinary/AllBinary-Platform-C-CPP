
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PreLogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DbConnectionInfo.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //import org.allbinary.logic.communication.log.config.type.LogConfigTypes;
class DbInitInfo: public DbConnectionInfo {

public: DbInitInfo(std::string initFileName, bool read);

    public: std::string getUrl();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void load();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setHasRead(bool value);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include("org/allbinary/business/init/db/DbConnectionInfo.h")
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#endif

        #endif
    
