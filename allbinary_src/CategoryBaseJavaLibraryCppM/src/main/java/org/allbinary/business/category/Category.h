
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class CategoryHierarchy;
class CategoryHierarchyInterface;
class CategoryPropertiesFactoryInterface;
class CategoryPropertiesInterface;
class RootCategoryPropertiesInterface;

class LogUtil;
class AbPath;
class StringMaker;
class StringUtil;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Category
            : public virtual Object
        , public virtual CategoryInterface {

    private: static inline const std::string NOT_ROOT = "This is not the root so it has no file path.";

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: CategoryHierarchyInterface* categoryHierarchyInterface;

    private: CategoryPropertiesInterface* categoryPropertiesInterface;

    private: BasicArrayList* childCategoryVector;

    private: BasicArrayList* typeVector;

    private: int32_t PROPERTIES;

    private: int32_t CATEGORY;

public: Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

public: Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

public: Category(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

                //@Throws(Exception.constructor)
            
    public: AbPath* getRootFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getWebAppPath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChildProperty(CategoryPropertiesInterface* categoryPropertiesInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChild(CategoryInterface* categoryInterface);

    public: BasicArrayList* getChildNodes();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool removeChild(CategoryInterface* categoryInterface);

    private: void removal(BasicArrayList* removalVector);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool removeDuplicateChild(CategoryInterface* categoryInterface);

                //@Throws(Exception.constructor)
            
    public: bool isLeaf();

    public: CategoryPropertiesInterface* getProperties();

    public: void setProperties(CategoryPropertiesInterface* categoryPropertiesInterface);

    public: CategoryHierarchyInterface* getHierarchy();

    public: void setHierarchy(CategoryHierarchyInterface* categoryHierarchyInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isValid();

                //@Throws(Exception.constructor)
            
    public: Document* toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

                //@Throws(Exception.constructor)
            
    public: void log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchy.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>
#endif
#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/CategoryInterface.h")
#include "org/allbinary/business/category/CategoryInterface.h"
#endif

        #endif
    
