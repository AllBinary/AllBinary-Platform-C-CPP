
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class CategoryData;
class CategoryUtil;
class CategoryHierarchyInterface;
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>
class StoreFrontFactory;
class StoreFrontInterface;
class URLGLOBALS;
class StdUtil;
class LogUtil;
class AbPath;
class AbPathData;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RootStoreCategoryProperties
            : public virtual Object
        , public virtual RootCategoryPropertiesInterface, public virtual CategoryPropertiesInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: AbPathData* pathData;

    private: AbPath* fileAbPath;

    private: AbPath* abPath;

    private: std::string category;

    private: bool isRealRoot_;

    /*protected*/ public: AbPath* webAppAbPath;

    /*protected*/ public: TransformInfoInterface* transformInfoInterface;

public: RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface);

public: RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath);

public: RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, Node* node);

public: RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initPath();

    public: bool isRealRoot();

    public: bool isRoot();

    public: Object* getKey();

    public: void setPath(AbPath* path);

    public: void setRootFilePath(AbPath* value);

    public: AbPath* getRootFilePath();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: AbPath* getWebAppPath();

    public: AbPath* getPath(CategoryHierarchyInterface* categoryHierarchyInterface);

    public: std::string getFileName();

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

    public: void log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryUtil.h>)
#include <org/allbinary/business/category/CategoryUtil.h>
#endif
#if __has_include(<org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>)
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/CategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>)
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif

        #endif
    
