
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryProperties.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryModifierTree.h"
#include "CategoryLoaderInterface.h"

class CategoryLoader: public CategoryModifierTree, public CategoryLoaderInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: CategoryLoader(CategoryFactoryInterface categoryFactoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Document getDoc(CategoryInterface categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface get(CategoryInterface categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface get(Document document);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface getAll(CategoryInterface categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface getAll(Document document);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface getAll(CategoryInterface parentCategoryInterface, NodeList categoryNodeList);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface addProperties(CategoryInterface loadedCategoryInterface, NodeList categoryNodeList);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H
