
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

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: isChild: bool = false;

    private: name: string;

    private: storeName: string;

    private: objectFileName: string;

    private: anyType: any;

    private: objectConfigFileName: string;

    private: objectConfigInterface: TransformInfoObjectConfigInterface;

    private: template: string;

    private: templateFileName: string;

    private: dataFileName: string;

    private: data: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor ();

public constructor (string name);

public constructor (string name, string objectFileName, string objectConfigFileName, string templateFileName, string dataFileName);

                //@Throws(Exception.constructor)
            
    public override(HashMap<any, any> hashMap);

    public string log();

    public setName(string value);

    public setStoreName(string value);

    public string getStoreName();

    public setObject(Object anyType);

    public setObjectFile(string value);

    public setTemplate(string value);

    public setTemplateFile(string value);

                //@Throws(Exception.constructor)
            
    setObjectConfigFileName(string value);

                //@Throws(Exception.constructor)
            
    setObjectConfigFile(string value);

                //@Throws(Exception.constructor)
            
    setObjectConfig(string value);

    public setDataFile(string value);

    public setData(string value);

    public string getName();

    public any getObject();

    public string getObjectFile();

    public string getTemplate();

    public string getTemplateFile();

                //@Throws(Exception.constructor)
            
    public AbPath getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public AbPath getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public AbPath getDataFilePath();

    public string getObjectConfigFile();

    string getData();

                //@Throws(Exception.constructor)
            
    public Document getDataDocument();

    public string getDataFile();

    public HashMap<any, any> toHashMap();

    public java.util.Vector toVector();

    public any getKey();

    public setChild();

    public bool isChild();

    public TransformInfoObjectConfigInterface getObjectConfigInterface();

    public setObjectConfigInterface(Object objectConfigInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFO_H
