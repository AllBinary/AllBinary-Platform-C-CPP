
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

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPrivateTree.h"
#include "CategoryModifierTreeInterface.h"

class CategoryModifierTree: public CategoryPrivateTree: public CategoryModifierTreeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

public constructor (CategoryFactoryInterface categoryFactoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public insert(CategoryInterface parentCategoryInterface, CategoryInterface newChildCategoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public delete(CategoryInterface parentCategoryInterface, CategoryInterface existingChildCategoryInterface);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_H
