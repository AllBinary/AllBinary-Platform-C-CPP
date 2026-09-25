
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/Encoder.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      
#include <org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"
#include "TransformInfoData.h"

class TransformInfo
            : public Object
        : public TransformInfoInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: bool isChild = false;

    private: std::string name;

    private: std::string storeName;

    private: std::string objectFileName;

    private: Object* anyType;

    private: std::string objectConfigFileName;

    private: TransformInfoObjectConfigInterface objectConfigInterface;

    private: std::string template;

    private: std::string templateFileName;

    private: std::string dataFileName;

    private: std::string data = StringUtil::getInstance().EMPTY_STRING;

public: TransformInfo();

public: TransformInfo(std::string name);

public: TransformInfo(std::string name, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName, std::string dataFileName);

                //@Throws(Exception.constructor)
            
    public: void override(HashMap<any, any> hashMap);

    public: std::string log();

    public: void setName(std::string value);

    public: void setStoreName(std::string value);

    public: std::string getStoreName();

    public: void setObject(Object anyType);

    public: void setObjectFile(std::string value);

    public: void setTemplate(std::string value);

    public: void setTemplateFile(std::string value);

                //@Throws(Exception.constructor)
            
    protected: void setObjectConfigFileName(std::string value);

                //@Throws(Exception.constructor)
            
    protected: void setObjectConfigFile(std::string value);

                //@Throws(Exception.constructor)
            
    protected: void setObjectConfig(std::string value);

    public: void setDataFile(std::string value);

    public: void setData(std::string value);

    public: std::string getName();

    public: Object* getObject();

    public: std::string getObjectFile();

    public: std::string getTemplate();

    public: std::string getTemplateFile();

                //@Throws(Exception.constructor)
            
    public: AbPath getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath getDataFilePath();

    public: std::string getObjectConfigFile();

    private: std::string getData();

                //@Throws(Exception.constructor)
            
    public: Document getDataDocument();

    public: std::string getDataFile();

    public: HashMap<any, any> toHashMap();

    public: BasicArrayList toVector();

    public: Object* getKey();

    public: void setChild();

    public: bool isChild();

    public: TransformInfoObjectConfigInterface getObjectConfigInterface();

    public: void setObjectConfigInterface(Object objectConfigInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H
