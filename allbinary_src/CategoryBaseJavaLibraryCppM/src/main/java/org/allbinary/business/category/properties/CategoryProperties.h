
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class CategoryData;
class CategoryInterface;
class CategoryUtil;
class CategoryHierarchyInterface;
class StdUtil;
class LogUtil;
class AbSqlData;
class AbPath;
class AbPathData;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class BasicArrayList;
class BasicArrayListD;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryProperties
            : public virtual Object
        , public virtual CategoryPropertiesInterface {

    private: static inline const int32_t MAXDEPTH = 100;

    /*protected*/ public: LogUtil* logUtil;

    private: std::string category;

public: CategoryProperties(std::string name);

public: CategoryProperties(Node* node);

public: CategoryProperties(HashMap<Object*, Object*>* categoryPropertiesHashMap);

    public: bool isRealRoot();

    public: bool isRoot();

    public: Object* getKey();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: AbPath* getPath(CategoryHierarchyInterface* categoryHierarchyInterface);

    public: std::string getFileName();

                //@Throws(Exception.constructor)
            
    public: AbPath* getWebAppPath();

    public: void setValue(std::string value);

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

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryInterface.h>)
#include <org/allbinary/business/category/CategoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryUtil.h>)
#include <org/allbinary/business/category/CategoryUtil.h>
#endif
#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlData.h>)
#include <org/allbinary/logic/communication/sql/AbSqlData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesInterface.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#endif

        #endif
    
