
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/category/CategoryComponent.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/store/StoreCategoryFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoBasic.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class CategoryRequestHelper: public ModifyTable {

    private: static const std::string categoryRequest = StringMaker().append("<").append(CategoryData::getInstance().REQUEST).append(">").toString();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: PageContext pageContext;

    private: HashMap<Object*, Object*> hashMap;

    private: HttpServletRequest request;

    private: CategoryLoaderInterface categoryLoaderInterface;

    private: CategoryInterface categoryInterface;

    private: CategoryInterface childCategoryInterface;

    private: TransformInfoInterface transformInfoInterface;

public: CategoryRequestHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext);

    public: void getXmlData();

                //@Throws(Exception.constructor)
            
    private: void setCategoryLoader(Node requestNode);

    public: std::string insert();

    public: std::string delete_();

    public: std::string viewCategory();

    public: std::string viewCategories();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_CATEGORYREQUESTHELPER_H
