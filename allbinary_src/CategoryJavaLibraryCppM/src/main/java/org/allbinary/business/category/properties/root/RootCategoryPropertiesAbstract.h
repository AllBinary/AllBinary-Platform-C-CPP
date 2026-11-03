
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H

        
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
class BasicArrayList;
class BasicArrayListD;
class CategoryData;
class CategoryHierarchyInterface;
class StdUtil;
class AbPath;
class AbPathData;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RootCategoryPropertiesAbstract
            : public virtual Object
        , public virtual RootCategoryPropertiesInterface {

    private: const std::string category;

    private: const std::string fileName;

public: RootCategoryPropertiesAbstract();

    public: Object* getKey();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: void setValue(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setRootFilePath(AbPath* value);

                //@Throws(Exception.constructor)
            
    public: void setRootFilePath(std::string value);

                //@Throws(Exception.constructor)
            
    public: AbPath* getRootFilePath();

                //@Throws(Exception.constructor)
            
    public: bool isRealRoot();

                //@Throws(Exception.constructor)
            
    public: bool isRoot();

                //@Throws(Exception.constructor)
            
    public: std::string getWebAppPath(CategoryHierarchyInterface* categoryHierarchyInterface);

    public: AbPath* getPath(CategoryHierarchyInterface* categoryHierarchyInterface);

    public: std::string getFileName();

    public: bool isValid();

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

                //@Throws(Exception.constructor)
            
    public: Document* toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h")
#include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"
#endif

        #endif
    
