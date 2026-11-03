
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CategoryData;
class CategoryFactoryInterface;
class CategoryInterface;
class CategoryProperties;
class CategoryPropertiesInterface;
class DomSearchHelper;
class DomDocumentHelper;
class LogUtil;
class CryptFileReader;
class AbFile;
class AbPath;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/category/CategoryModifierTree.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryLoader: public CategoryModifierTree, public virtual CategoryLoaderInterface {

    /*protected*/ public: LogUtil* logUtil;

public: CategoryLoader(CategoryFactoryInterface* categoryFactoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Document* getDoc(CategoryInterface* categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface* get(CategoryInterface* categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface* get(Document* document);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: CategoryInterface* getAll(CategoryInterface* categoryInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface* getAll(Document* document);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface* getAll(CategoryInterface* parentCategoryInterface, NodeList* categoryNodeList);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: CategoryInterface* addProperties(CategoryInterface* loadedCategoryInterface, NodeList* categoryNodeList);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryFactoryInterface.h>)
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryProperties.h>)
#include <org/allbinary/business/category/properties/CategoryProperties.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryModifierTree.h")
#include "org/allbinary/data/tree/category/CategoryModifierTree.h"
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryLoaderInterface.h")
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"
#endif

        #endif
    
