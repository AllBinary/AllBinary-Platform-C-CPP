
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
        



        #ifndef ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
class HttpServletRequest;
class PageContext;
class CategoryComponent;
class CategoryData;
class CategoryInterface;
class StoreCategoryFactory;
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class CategoryLoaderFactory;
class CategoryLoaderInterface;
class DomNodeHelper;
class DomSearchHelper;
class DomDocumentHelper;
class XmlDocumentHelper;
class LogUtil;
class StringMaker;
class StringUtil;
class TransformInfoBasic;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryRequestHelper: public ModifyTable {

    private: static const std::string categoryRequest;

    /*protected*/ public: LogUtil* logUtil;

    private: PageContext* pageContext;

    private: HashMap<Object*, Object*>* hashMap;

    private: HttpServletRequest* request;

    private: CategoryLoaderInterface* categoryLoaderInterface;

    private: CategoryInterface* categoryInterface;

    private: CategoryInterface* childCategoryInterface;

    private: TransformInfoInterface* transformInfoInterface;

public: CategoryRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: void getXmlData();

                //@Throws(Exception.constructor)
            
    private: void setCategoryLoader(Node* requestNode);

    public: std::string insert();

    public: std::string delete_();

    public: std::string viewCategory();

    public: std::string viewCategories();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryComponent.h>)
#include <org/allbinary/business/category/CategoryComponent.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/store/StoreCategoryFactory.h>)
#include <org/allbinary/business/category/store/StoreCategoryFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/category/CategoryLoaderFactory.h>)
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/category/CategoryLoaderInterface.h>)
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoBasic.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoBasic.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif

        #endif
    
