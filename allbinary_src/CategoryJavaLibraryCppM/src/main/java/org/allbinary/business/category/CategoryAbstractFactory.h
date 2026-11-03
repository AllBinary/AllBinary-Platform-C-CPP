
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>
class CategoryPropertiesFactory;
class CategoryPropertiesFactoryInterface;
class LogUtil;
class AbPath;
class CommonStrings;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryFactoryInterface.h"
class CategoryInterface;
class Category;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryAbstractFactory
            : public virtual Object
        , public virtual CategoryFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

public: CategoryAbstractFactory();

    public: CategoryInterface* getRootInstance();

    public: CategoryInterface* getRootInstance(AbPath* categoryAbPath);

    public: CategoryInterface* getRootInstanceFromNode(Node* node);

    public: CategoryInterface* getInstance(std::string categoryName);

    public: CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, std::string categoryName);

    public: CategoryInterface* getInstance(Node* node);

    public: CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node);

    public: CategoryInterface* getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesFactory.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesFactory.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/CategoryFactoryInterface.h")
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/category/CategoryInterface.h")
#include "org/allbinary/business/category/CategoryInterface.h"
#endif
#if __has_include("org/allbinary/business/category/Category.h")
#include "org/allbinary/business/category/Category.h"
#endif

        #endif
    
