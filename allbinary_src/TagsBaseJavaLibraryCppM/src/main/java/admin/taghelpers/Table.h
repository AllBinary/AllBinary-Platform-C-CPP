
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
        



        #ifndef ADMIN_TAGHELPERS_TABLE_H
        #define ADMIN_TAGHELPERS_TABLE_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableInterface.h"

class Table
            : public Object
        : public TableInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: std::string drop();

                //@Throws(Exception.constructor)
            
    public: std::string create();

                //@Throws(Exception.constructor)
            
    public: std::string restore();

                //@Throws(Exception.constructor)
            
    public: std::string backup();

                //@Throws(Exception.constructor)
            
    public: std::string insert();

                //@Throws(Exception.constructor)
            
    public: std::string delete_();

                //@Throws(Exception.constructor)
            
    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_TABLE_H
