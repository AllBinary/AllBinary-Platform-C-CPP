
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/root/RootCategoryPropertiesAbstract.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"


RootCategoryPropertiesAbstract::RootCategoryPropertiesAbstract() : category(CategoryData::getInstance()->ROOTCATEGORY), fileName(this->category +AbPathData::getInstance()->EXTENSION_SEP +CategoryData::getInstance()->UNCRYPTED_EXTENSION){
}


    auto RootCategoryPropertiesAbstract::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue();
    
}


    auto RootCategoryPropertiesAbstract::getValue() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->category;
    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::setValue(std::string value) -> void{



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::setRootFilePath(AbPath* value) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::setRootFilePath(std::string value) -> void{



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::getRootFilePath() -> AbPath*{



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::isRealRoot() -> bool{



                            throw Exception("No A Real Root");
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::isRoot() -> bool{



                            throw Exception("Root but not implemented");
                    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::getWebAppPath(CategoryHierarchyInterface* categoryHierarchyInterface) -> std::string{



                            throw Exception("Not Root");
                    
}


    auto RootCategoryPropertiesAbstract::getPath(CategoryHierarchyInterface* categoryHierarchyInterface) -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath::createAbPath();;
    
}


    auto RootCategoryPropertiesAbstract::getFileName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileName;
    
}


    auto RootCategoryPropertiesAbstract::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    auto RootCategoryPropertiesAbstract::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* categoryHashMap = StdUtil::getInstance()->createHashMap();;
    
categoryHashMap->put(CategoryData::getInstance()->NAME, this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


    auto RootCategoryPropertiesAbstract::toVector() -> BasicArrayList*{

    BasicArrayList* categoryVector = new BasicArrayListD();;
    
categoryVector->add(this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto RootCategoryPropertiesAbstract::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_CPP
