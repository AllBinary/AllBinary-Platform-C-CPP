
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class URIResolverStrings
            : public virtual Object
         {

    private: static URIResolverStrings* instance_owner();
    private: static URIResolverStrings* instance;

    public: static URIResolverStrings* getInstance();


            
    public: URIResolverStrings();
        
    public: const std::string IMPORT_URL = "/{import url}";

    public: const std::string ATTEMPT = "attempt to use xsl:import: href=";

    public: const std::string BASE = "\nBase= ";

    public: const std::string NEW_PATH = "\nNew path= ";

    public: const std::string NOTE = "\nNote: ";

    public: const std::string URL_GLOBAL = " is a urlglobal";

    public: const std::string REQUIRED_EXTENSION = "\nRequired Extension: ";

    public: const std::string RESOLVE = "resolve";

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H_COMPLETE
        
        #endif
    
