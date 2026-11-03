
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Category;
#include <org/allbinary/business/category/CategoryAbstractFactory.h>
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
class CategoryInterface;
class CategoryUtil;
class CategoryPropertiesFactoryInterface;
class RootStoreCategoryPropertiesFactory;
class LogUtil;
class AbPath;
class StringUtil;
class TransformInfoInterface;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreCategoryFactory: public CategoryAbstractFactory, public virtual CategoryFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: TransformInfoInterface* transformInfoInterface;

public: StoreCategoryFactory(TransformInfoInterface* transformInfoInterface);

    public: CategoryInterface* getRootInstance();

    public: CategoryInterface* getRootInstance(AbPath* categoryPath);

    public: CategoryInterface* getRootInstanceFromNode(Node* node);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/Category.h>)
#include <org/allbinary/business/category/Category.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryAbstractFactory.h>)
#include <org/allbinary/business/category/CategoryAbstractFactory.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryFactoryInterface.h>)
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryUtil.h>)
#include <org/allbinary/business/category/CategoryUtil.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h>)
#include <org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif

        #endif
    
