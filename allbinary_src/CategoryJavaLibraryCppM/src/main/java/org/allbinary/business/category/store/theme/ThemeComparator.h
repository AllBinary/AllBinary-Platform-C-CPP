
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_THEMECOMPARATOR_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_THEMECOMPARATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Comparator.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThemeComparator
            : public virtual Object
        , public virtual Comparator {

public: ThemeComparator();

    public: int32_t compare(Object* anyType, Object* object2);
    public: int32_t compare(const std::string& anyType, Object* object2) { return compare(JavaString::box(anyType), object2); }

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_THEMECOMPARATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_THEMECOMPARATOR_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_THEMECOMPARATOR_H_COMPLETE
        #if __has_include(<java/util/Comparator.h>)
#include <java/util/Comparator.h>
#endif

        #endif
    
