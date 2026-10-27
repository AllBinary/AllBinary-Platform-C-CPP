
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CategoryFactoryInterface;
class CategoryInterface;
class LogUtil;
class Directory;
class AbPath;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/category/CategoryPrivateTree.h"
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryModifierTree: public CategoryPrivateTree, public CategoryModifierTreeInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: Directory* directory;

public: CategoryModifierTree(CategoryFactoryInterface* categoryFactoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void insert(CategoryInterface* parentCategoryInterface, CategoryInterface* newChildCategoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void delete_(CategoryInterface* parentCategoryInterface, CategoryInterface* existingChildCategoryInterface);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryFactoryInterface.h>)
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryPrivateTree.h")
#include "org/allbinary/data/tree/category/CategoryPrivateTree.h"
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryModifierTreeInterface.h")
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"
#endif

        #endif
    
