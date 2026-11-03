
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/db/DbInitInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DbConnectionInfo.h"
//import org.allbinary.logic.communication.log.config.type.LogConfigTypes;

DbInitInfo::DbInitInfo(std::string initFileName, bool read) : DbConnectionInfo(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto DbInitInfo::getUrl() -> std::string{

    std::string url = DbConnectionInfo::getUrl();;
    
PreLogUtil::put(JavaString::valueOf("Url: ") +JavaString::valueOf(url), this, "getUrl");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return url;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DbInitInfo::write() -> void{
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DbInitInfo::load() -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DbInitInfo::setHasRead(bool value) -> void{
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP
