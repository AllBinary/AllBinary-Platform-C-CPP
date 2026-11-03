
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontData;
class EntryData;
class DomDocumentHelper;
class XmlDocumentHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class StdUtil;
class LogUtil;
class Encoder;
class CryptFileReader;
class OutputTypeData;
class AbFilePath;
class AbPath;
class AbPathData;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class TransformInfoDataData;
class TransformInfoObjectConfig;
class TransformInfoObjectConfigAndManipulatorFactory;
class TransformInfoObjectConfigInterface;
class TransformInfoTemplateData;
class TransformInfoObjectData;
class CommonSeps;
class CommonStrings;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
class TransformInfoData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfo
            : public virtual Object
        , public virtual TransformInfoInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: AbeClientInformationInterface* abeClientInformation;

    private: bool isChild_ = false;

    private: std::string name;

    private: std::string storeName;

    private: std::string objectFileName;

    private: Object* anyType;

    private: std::string objectConfigFileName;

    private: TransformInfoObjectConfigInterface* objectConfigInterface;

    private: std::string template_;

    private: std::string templateFileName;

    private: std::string dataFileName;

    private: std::string data;

public: TransformInfo();

public: TransformInfo(std::string name);

public: TransformInfo(std::string name, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName, std::string dataFileName);

                //@Throws(Exception.constructor)
            
    public: void override(HashMap<Object*, Object*>* hashMap);

    public: std::string log();

    public: void setName(std::string value);

    public: void setStoreName(std::string value);

    public: std::string getStoreName();

    public: void setObject(Object* anyType);
    public: void setObject(const std::string& anyType) { return setObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setObject(BoxValue anyType) { return setObject(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void setObject(const std::vector<BoxElement>& anyType) { return setObject(JavaBoxes::toObject(anyType)); }

    public: void setObjectFile(std::string value);

    public: void setTemplate(std::string value);

    public: void setTemplateFile(std::string value);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setObjectConfigFileName(std::string value);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setObjectConfigFile(std::string value);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setObjectConfig(std::string value);

    public: void setDataFile(std::string value);

    public: void setData(std::string value);

    public: std::string getName();

    public: Object* getObject();

    public: std::string getObjectFile();

    public: std::string getTemplate();

    public: std::string getTemplateFile();

                //@Throws(Exception.constructor)
            
    public: AbPath* getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getDataFilePath();

    public: std::string getObjectConfigFile();

    private: std::string getData();

                //@Throws(Exception.constructor)
            
    public: Document* getDataDocument();

    public: std::string getDataFile();

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

    public: Object* getKey();

    public: void setChild();

    public: bool isChild();

    public: TransformInfoObjectConfigInterface* getObjectConfigInterface();

    public: void setObjectConfigInterface(TransformInfoObjectConfigInterface* objectConfigInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
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
#if __has_include(<org/allbinary/logic/control/crypt/Encoder.h>)
#include <org/allbinary/logic/control/crypt/Encoder.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/OutputTypeData.h>)
#include <org/allbinary/logic/io/OutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbFilePath.h>)
#include <org/allbinary/logic/io/path/AbFilePath.h>
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
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h>)
#include <org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>)
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h>)
#include <org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoData.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#endif

        #endif
    
