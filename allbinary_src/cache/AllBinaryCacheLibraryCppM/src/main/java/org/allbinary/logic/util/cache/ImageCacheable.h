
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCacheable
            : public virtual Object
         {

    private: std::string name;

public: ImageCacheable(std::string name, Object* anyType);
public: ImageCacheable(std::string name, const std::string& anyType) : ImageCacheable(name, JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ImageCacheable(std::string name, BoxValue anyType) : ImageCacheable(name, JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> ImageCacheable(std::string name, const std::vector<BoxElement>& anyType) : ImageCacheable(name, JavaBoxes::toObject(anyType)) { }

    public: Object* getKey();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
