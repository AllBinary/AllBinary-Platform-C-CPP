
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

class StoreThemeCategory: public Category, public StoreThemeCategoryInterface {

    private: TransformInfoInterface* transformInfoInterface;

    private: BasicArrayList* themeVector;

public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) : Category(categoryPropertiesFactoryInterface, level){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
}


public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
}


public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) : Category(categoryPropertiesFactoryInterface, level){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
this->addThemes(node);
    
}


public: StoreThemeCategory(TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->transformInfoInterface= transformInfoInterface;
    
this->themeVector= new BasicArrayListD();
    
this->addThemes(node);
    
}


    public: TransformInfoInterface* getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void addThemes(Node* node){

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


    public: void addTheme(ThemeValidation* themeValidation){
this->themeVector->add(themeValidation);
    
}


    public: BasicArrayList* getThemes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->themeVector;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isValid(){

                        if(!super.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* categoryHashMap = super.toHashMap();;
    
categoryHashMap->put(ThemesData::getInstance()->NAME, this->themeVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector(){

    BasicArrayList* categoryVector = super.toVector();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


};

            

