
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpInterface.h"
//Hack class should not exist
class TransformInfoBasic: public AbContext: public TransformInfoHttpInterface {
        

    private: storeFrontInterface: StoreFrontInterface;

public constructor (StoreFrontInterface storeFrontInterface, HashMap<any, any> propertiesHashMap, PageContext pageContext);

    public string getStoreName();

    public string log();

    public override(HashMap<any, any> hashMap);

    public string getName();

    public string getObjectFile();

    public any getObject();

    public TransformInfoObjectConfigInterface getObjectConfigInterface();

    public setObjectConfigInterface(Object transformInfoObjectConfigInterface);

    public AbPath getTemplateFilePath();

    public string getTemplateFile();

    public string getTemplate();

    public AbPath getDataFilePath();

    public string getDataFile();

                //@Throws(Exception.constructor)
            
    public Document getDataDocument();

    public setName(string value);

    public setStoreName(string value);

    public setObjectFile(string value);

    public setObject(Object anyType);

    public setObjectConfigFile(string value);

    public setTemplateFile(string value);

    public setTemplate(string value);

    public setDataFile(string value);

    public setData(string value);

    public setChild();

    public bool isChild();

    public string getImportUriPath();

    public setImportUriPath(string importUriPath);

                //@Throws(Exception.constructor)
            
    public any getKey();

                //@Throws(Exception.constructor)
            
    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H
