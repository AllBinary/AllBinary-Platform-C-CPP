
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPropertiesInterface.h"

class CategoryProperties
            : public Object
        : public CategoryPropertiesInterface {

    private: static const int32_t MAXDEPTH = 100;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string category;

public: CategoryProperties(std::string name);

public: CategoryProperties(Node node);

public: CategoryProperties(HashMap<Object*, Object*> categoryPropertiesHashMap);

    public: bool isRealRoot();

    public: bool isRoot();

    public: Object* getKey();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface);

    public: std::string getFileName();

                //@Throws(Exception.constructor)
            
    public: AbPath getWebAppPath();

    public: void setValue(std::string value);

    public: Boolean isValid();

    public: HashMap<Object*, Object*> toHashMap();

    public: BasicArrayList toVector();

                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H
