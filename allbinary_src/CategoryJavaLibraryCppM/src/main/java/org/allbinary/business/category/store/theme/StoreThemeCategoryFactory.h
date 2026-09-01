
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactory.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/root/store/theme/RootStoreThemeCategoryPropertiesFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategory.h"

class StoreThemeCategoryFactory
            : public Object
        : public CategoryFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TransformInfoInterface transformInfoInterface;

public: StoreThemeCategoryFactory(TransformInfoInterface transformInfoInterface);

    public: CategoryInterface getRootInstance();

    public: CategoryInterface getRootInstance(AbPath categoryAbPath);

    public: CategoryInterface getRootInstanceFromNode(Node node);

    public: CategoryInterface getInstance(std::string categoryPath, int32_t level);

    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, std::string categoryPath);

    public: CategoryInterface getInstance(Node node, int32_t level);

    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, Node node);

    public: CategoryInterface getInstance(HashMap<any, any> categoryPropertiesHashMap, int32_t level);

    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<any, any> categoryPropertiesHashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_H
