
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"

class Category
            : public Object
        , public CategoryInterface {

    private: static inline const std::string NOT_ROOT = "This is not the root so it has no file path.";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CategoryHierarchyInterface* categoryHierarchyInterface;

    private: CategoryPropertiesInterface* categoryPropertiesInterface;

    private: BasicArrayList* childCategoryVector = new BasicArrayListD();

    private: BasicArrayList* typeVector = new BasicArrayListD();

    private: int32_t PROPERTIES = int32_t(1);

    private: int32_t CATEGORY = int32_t(0);

public: Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

public: Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

public: Category(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

                //@Throws(Exception.constructor)
            
    public: AbPath* getRootFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getWebAppPath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChildProperty(CategoryPropertiesInterface* categoryPropertiesInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChild(CategoryInterface* categoryInterface);

    public: BasicArrayList* getChildNodes();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool removeChild(CategoryInterface* categoryInterface);

    private: void removal(BasicArrayList* removalVector);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool removeDuplicateChild(CategoryInterface* categoryInterface);

                //@Throws(Exception.constructor)
            
    public: bool isLeaf();

    public: CategoryPropertiesInterface* getProperties();

    public: void setProperties(CategoryPropertiesInterface* categoryPropertiesInterface);

    public: CategoryHierarchyInterface* getHierarchy();

    public: void setHierarchy(CategoryHierarchyInterface* categoryHierarchyInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isValid();

                //@Throws(Exception.constructor)
            
    public: Document* toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

                //@Throws(Exception.constructor)
            
    public: void log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H
