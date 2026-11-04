
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/store/theme/StoreThemeCategory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/Category.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/visual/theme/ThemeData.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/allbinary/logic/visual/theme/ThemesData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"


StoreThemeCategory::StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) : Category(categoryPropertiesFactoryInterface, level){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
}


StoreThemeCategory::StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
}


StoreThemeCategory::StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) : Category(categoryPropertiesFactoryInterface, level){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
this->addThemes(node);
    
}


StoreThemeCategory::StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
this->addThemes(node);
    
}


    auto StoreThemeCategory::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreThemeCategory::addThemes(Node* node) -> void{

    Node* themesNode = DomSearchHelper::getNode(ThemesData::getInstance()->NAME, node->getChildNodes());;
    

    NodeList* nodeList = themesNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* themeNode = nodeList->item(index);;
    

                        if(themeNode->getNodeName()->compareTo(ThemeData::getInstance()->NAME) == 0)
                        
                                    {
                                    this->themeVector->add(new ThemeValidation(this, themeNode));
    

                                    }
                                
}

}


    auto StoreThemeCategory::addTheme(ThemeValidation* themeValidation) -> void{
this->themeVector->add(themeValidation);
    
}


    auto StoreThemeCategory::getThemes() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->themeVector;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreThemeCategory::isValid() -> bool{

                        if(!Category::isValid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreThemeCategory::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* categoryHashMap = Category::toHashMap();;
    
categoryHashMap->put(ThemesData::getInstance()->NAME, this->themeVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryHashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreThemeCategory::toVector() -> BasicArrayList*{

    BasicArrayList* categoryVector = Category::toVector();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryVector;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORY_CPP
