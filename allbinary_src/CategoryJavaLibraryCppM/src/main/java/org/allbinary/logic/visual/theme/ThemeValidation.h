
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H

        
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
class CategoryData;
class CategoryFactoryInterface;
class StoreThemeCategoryFactory;
class StoreThemeCategoryInterface;
class CategoryLoaderFactory;
class CategoryLoaderInterface;
class DomData;
class DomNodeHelper;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class ModDomHelper;
class DomDocumentHelper;
class StdUtil;
class LogUtil;
class AbSqlData;
class CryptFileReader;
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
class AbPath;
class AbPathData;
class PathUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
class TransformInfoInterface;
class CssStyleValidation;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/theme/ThemeInterface.h"
class ThemeData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThemeValidation
            : public virtual Object
        , public virtual ThemeInterface, public virtual ValidationInterface, public virtual DomNodeInterface, public virtual CompositeTransformInfoInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: TransformInfoInterface* transformInfoInterface;

    private: ValidationInterface* styleValidationInterface;

    private: std::string themeName;

    private: std::string themePreviewImageName;

    private: AbPath* webAppAbPath;

    private: AbPath* categoryAbPath;

    private: AbPath* fileAbPath;

public: ThemeValidation(TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, std::string categoryThemePath);

public: ThemeValidation(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* hashMap);

public: ThemeValidation(StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node);

                //@Throws(Exception.constructor)
            
    private: void init();

                //@Throws(Exception.constructor)
            
    private: void init(StoreThemeCategoryInterface* storeThemeCategoryInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterface();

    public: std::string getName();

    public: std::string getPreviewImageName();

    public: std::string getPreviewImagePath();

    public: std::string getPath();

                //@Throws(Exception.constructor)
            
    public: CssStyleValidation* getCssStyleValidation();

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

    public: Object* getKey();

    public: BasicArrayList* toVector();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H_COMPLETE
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
#if __has_include(<org/allbinary/business/category/CategoryFactoryInterface.h>)
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h>)
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h>
#endif
#if __has_include(<org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h>)
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/category/CategoryLoaderFactory.h>)
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/category/CategoryLoaderInterface.h>)
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomData.h>)
#include <org/allbinary/data/tree/dom/DomData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
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
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/PathUtil.h>)
#include <org/allbinary/logic/io/path/PathUtil.h>
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
#if __has_include(<org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/visual/theme/ThemeInterface.h")
#include "org/allbinary/logic/visual/theme/ThemeInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/theme/ThemeData.h")
#include "org/allbinary/logic/visual/theme/ThemeData.h"
#endif

        #endif
    
