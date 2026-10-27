
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/business/category/Category.h>
class CategoryInterface;
class CategoryPropertiesFactoryInterface;
class DomSearchHelper;

class ThemeData;
class ThemeValidation;
class ThemesData;
class TransformInfoInterface;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreThemeCategory: public Category, public StoreThemeCategoryInterface {

    private: TransformInfoInterface* transformInfoInterface;

    private: BasicArrayList* themeVector;

public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

    public: TransformInfoInterface* getTransformInfoInterface();

                //@Throws(Exception.constructor)
            
    public: void addThemes(Node* node);

    public: void addTheme(ThemeValidation* themeValidation);

    public: BasicArrayList* getThemes();

                //@Throws(Exception.constructor)
            
    public: bool isValid();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/category/Category.h>)
#include <org/allbinary/business/category/Category.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif

#if __has_include(<org/allbinary/logic/visual/theme/ThemeData.h>)
#include <org/allbinary/logic/visual/theme/ThemeData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/theme/ThemeValidation.h>)
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>
#endif
#if __has_include(<org/allbinary/logic/visual/theme/ThemesData.h>)
#include <org/allbinary/logic/visual/theme/ThemesData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h")
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"
#endif

        #endif
    
