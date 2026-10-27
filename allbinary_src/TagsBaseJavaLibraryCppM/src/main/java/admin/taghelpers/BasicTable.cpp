
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTABLE_CPP
        #define ADMIN_TAGHELPERS_BASICTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/BasicTable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTableInterface.h"


BasicTable::BasicTable() : commonStrings(CommonStrings::getInstance()) {
        }
        
                //@Throws(Exception.constructor)
            
    auto BasicTable::drop() -> std::string{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicTable::create() -> std::string{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicTable::restore() -> std::string{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicTable::backup() -> std::string{



                            throw RuntimeException();
                    
}




        #endif //ADMIN_TAGHELPERS_BASICTABLE_CPP
