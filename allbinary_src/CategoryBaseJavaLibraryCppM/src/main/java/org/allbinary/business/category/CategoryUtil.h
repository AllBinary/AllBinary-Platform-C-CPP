
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DomNodeHelper;
class DomSearchHelper;
class AbPath;
class AbPathData;
class StringUtil;
class StringUtils;
class Attr;
class NamedNodeMap;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CategoryData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryUtil
            : public virtual Object
         {
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static int32_t getPathLevel(AbPath* categoryPath);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string getNameFromNode(Node* node);

private: CategoryUtil();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/apache/commons/lang3/StringUtils.h>)
#include <org/apache/commons/lang3/StringUtils.h>
#endif
#if __has_include(<org/w3c/dom/Attr.h>)
#include <org/w3c/dom/Attr.h>
#endif
#if __has_include(<org/w3c/dom/NamedNodeMap.h>)
#include <org/w3c/dom/NamedNodeMap.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/CategoryData.h")
#include "org/allbinary/business/category/CategoryData.h"
#endif

        #endif
    
