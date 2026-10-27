
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonDataFileStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryData
            : public virtual Object
         {

    private: static CategoryData* instance_owner();
    private: static CategoryData* instance;

    public: static CategoryData* getInstance();

private: CategoryData();

    public: const std::string PARENT = "CATEGORY_PARENT";

    public: const std::string NAME = "CATEGORY_NAME";

    public: const std::string PATH = "CATEGORY_PATH";

    public: const std::string LABEL = "CATEGORY_LABEL";

    public: const std::string VIEW = "CATEGORY_VIEW_CATEGORY";

    public: const std::string LEVEL = "CATEGORY_LEVEL";

    public: const std::string REQUEST = "request";

    public: const std::string ROOTCATEGORY = "Category";

    public: const std::string UNCRYPTED_EXTENSION;

    public: const std::string ENCRYPTED_EXTENSION;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYDATA_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/CommonDataFileStrings.h>)
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>
#endif

        #endif
    
