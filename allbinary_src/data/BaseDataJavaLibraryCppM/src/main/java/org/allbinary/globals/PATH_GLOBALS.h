
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PATH_GLOBALS
            : public Object
         {

    private: static PATH_GLOBALS* instance() { static std::unique_ptr<PATH_GLOBALS> value(new PATH_GLOBALS()); return value.get(); }

    public: static PATH_GLOBALS* getInstance();

private: PATH_GLOBALS();

    public: std::string DATA_PATH;

    public: std::string INIT_PATH;

    public: std::string VIEWS_PATH;

    public: std::string LOG_PATH;

    public: std::string BACKUP_PATH;

};

            


        #endif //ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H
