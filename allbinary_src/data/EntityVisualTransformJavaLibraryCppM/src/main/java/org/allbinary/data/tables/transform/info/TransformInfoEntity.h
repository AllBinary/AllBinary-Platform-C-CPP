
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/Encoder.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoEntityInterface.h"

class TransformInfoEntity: public AbSqlBean: public TransformInfoEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "transforminfo";

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: const transformInfoFactoryInterface: TransformInfoFactoryInterface;

    private: const transformInfoObjectConfigAndManipulatorFactoryInterface: TransformInfoObjectConfigAndManipulatorFactoryBase;

    private: const transformInfoObjectConfigGeneratorFactoryInterface: TransformInfoObjectConfigGeneratorFactoryInterface;

public constructor (TransformInfoObjectConfigGeneratorFactoryInterface transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface transformInfoFactoryInterface);

    public insert(Vector values);

    public delete(string value);

                //@Throws(Exception.constructor)
            
    public TransformInfoInterface get(string name, HashMap<any, any> propertiesHashMap, PageContext pageContext);

                //@Throws(Exception.constructor)
            
    public Vector getObjectConfigs(string storeName);

                //@Throws(Exception.constructor)
            
    public Vector getNames(string storeName);

    public string createTableStatement();

    public string createTable();

    public update(HashMap<any, any> updatedValues);

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H
