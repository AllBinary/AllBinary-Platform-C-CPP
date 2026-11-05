
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
#include <org/allbinary/business/context/AbContext.h>
class StoreFrontInterface;
class AbPath;
class TransformInfoObjectConfigInterface;
class Document;
class WeblisketSessionInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Hack class should not exist
class TransformInfoBasic: public AbContext, public virtual TransformInfoHttpInterface {

    private: StoreFrontInterface* storeFrontInterface;

public: TransformInfoBasic(StoreFrontInterface* storeFrontInterface, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    public: std::string getStoreName();

    public: std::string log();

    public: void override(HashMap<Object*, Object*>* hashMap);

    public: std::string getName();

    public: std::string getObjectFile();

    public: Object* getObject();

    public: TransformInfoObjectConfigInterface* getObjectConfigInterface();

    public: void setObjectConfigInterface(TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface);

    public: AbPath* getTemplateFilePath();

    public: std::string getTemplateFile();

    public: std::string getTemplate();

    public: AbPath* getDataFilePath();

    public: std::string getDataFile();

                //@Throws(Exception.constructor)
            
    public: Document* getDataDocument();

    public: void setName(std::string value);

    public: void setStoreName(std::string value);

    public: void setObjectFile(std::string value);

    public: void setObject(Object* anyType);
    public: void setObject(const std::string& anyType) { return setObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setObject(BoxValue anyType) { return setObject(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void setObject(const std::vector<BoxElement>& anyType) { return setObject(JavaBoxes::toObject(anyType)); }

    public: void setObjectConfigFile(std::string value);

    public: void setTemplateFile(std::string value);

    public: void setTemplate(std::string value);

    public: void setDataFile(std::string value);

    public: void setData(std::string value);

    public: void setChild();

    public: bool isChild();

    public: std::string getImportUriPath();

    public: void setImportUriPath(std::string importUriPath);

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

    public: WeblisketSessionInterface* getWeblisketSession();

    public: PageContext* getPageContext();

    public: HashMap<Object*, Object*>* getPropertiesHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/AbContext.h>)
#include <org/allbinary/business/context/AbContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#endif

        #endif
    
