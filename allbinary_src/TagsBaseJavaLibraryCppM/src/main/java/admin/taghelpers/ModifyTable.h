
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
        



        #ifndef ADMIN_TAGHELPERS_MODIFYTABLE_H
        #define ADMIN_TAGHELPERS_MODIFYTABLE_H

        
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
class TagStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ModifyTable
            : public virtual Object
        , public virtual ModifyTableInterface {


            
    public: ModifyTable();
        
    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: TagStrings* tagStrings;

                //@Throws(Exception.constructor)
            
    public: std::string insert();

                //@Throws(Exception.constructor)
            
    public: std::string delete_();

                //@Throws(Exception.constructor)
            
    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_MODIFYTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_MODIFYTABLE_H_COMPLETE)
        #define ADMIN_TAGHELPERS_MODIFYTABLE_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<tags/TagStrings.h>)
#include <tags/TagStrings.h>
#endif
#if __has_include("admin/taghelpers/ModifyTableInterface.h")
#include "admin/taghelpers/ModifyTableInterface.h"
#endif

        #endif
    
