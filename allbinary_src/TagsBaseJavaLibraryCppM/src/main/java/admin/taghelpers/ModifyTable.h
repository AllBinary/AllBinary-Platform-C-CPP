
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <tags/TagStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTableInterface.h"

class ModifyTable
            : public Object
        , public ModifyTableInterface {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: TagStrings* tagStrings = TagStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: std::string insert();

                //@Throws(Exception.constructor)
            
    public: std::string delete_();

                //@Throws(Exception.constructor)
            
    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_MODIFYTABLE_H
