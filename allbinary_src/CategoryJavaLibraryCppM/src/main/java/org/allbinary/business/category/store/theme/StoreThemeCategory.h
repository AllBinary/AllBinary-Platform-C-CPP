
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/Category.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/visual/theme/ThemeData.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/allbinary/logic/visual/theme/ThemesData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategoryInterface.h"

class StoreThemeCategory: public Category: public StoreThemeCategoryInterface {
        

    private: transformInfoInterface: TransformInfoInterface;

    private: themeVector: Vector;

public constructor (TransformInfoInterface transformInfoInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface, int32_t level);

public constructor (TransformInfoInterface transformInfoInterface, CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface);

public constructor (TransformInfoInterface transformInfoInterface, Node node, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface, int32_t level);

public constructor (TransformInfoInterface transformInfoInterface, Node node, CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface);

    public TransformInfoInterface getTransformInfoInterface();

                //@Throws(Exception.constructor)
            
    public addThemes(Node node);

    public addTheme(ThemeValidation themeValidation);

    public Vector getThemes();

                //@Throws(Exception.constructor)
            
    public Boolean isValid();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Vector toVector();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_H
