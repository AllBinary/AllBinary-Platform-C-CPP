
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTABLE_H
        #define ADMIN_TAGHELPERS_BASICTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTable
            : public virtual Object
        , public BasicTableInterface {


            
    public: BasicTable();
        
    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: std::string drop();

                //@Throws(Exception.constructor)
            
    public: std::string create();

                //@Throws(Exception.constructor)
            
    public: std::string restore();

                //@Throws(Exception.constructor)
            
    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_BASICTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_BASICTABLE_H_COMPLETE)
        #define ADMIN_TAGHELPERS_BASICTABLE_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("admin/taghelpers/BasicTableInterface.h")
#include "admin/taghelpers/BasicTableInterface.h"
#endif

        #endif
    
