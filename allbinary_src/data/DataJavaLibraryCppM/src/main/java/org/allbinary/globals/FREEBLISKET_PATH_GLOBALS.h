
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AbPathData;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FREEBLISKET_PATH_GLOBALS
            : public virtual Object
         {

    private: static FREEBLISKET_PATH_GLOBALS* instance_owner();
    private: static FREEBLISKET_PATH_GLOBALS* instance;

    public: static FREEBLISKET_PATH_GLOBALS* getInstance();

    public: std::string INSTALLPATH;

    public: std::string XSLPATH;

    public: const std::string TEMPLATEPATH;

    public: const std::string STYLEPATH;

    public: const std::string THEMEPATH;

    public: const std::string DBINITPATH;

    public: const std::string LINEDATAPATH;

    public: std::string CONFIGURATIONPATH;

    public: std::string USERCONFIGURATIONPATH;

    public: std::string CONTEXTCONFIGURATIONPATH;

    public: const std::string LICENSEERRORPAGE = "LicensingError.jsp";

    public: const std::string ERRORPAGE = "Error.jsp";

private: FREEBLISKET_PATH_GLOBALS();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H_COMPLETE)
        #define ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
