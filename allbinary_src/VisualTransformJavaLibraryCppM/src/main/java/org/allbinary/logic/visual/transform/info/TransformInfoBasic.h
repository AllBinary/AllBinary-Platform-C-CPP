
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
class TransformInfoBasic: public AbContext, public TransformInfoHttpInterface {

    private: StoreFrontInterface storeFrontInterface;

public: TransformInfoBasic(StoreFrontInterface storeFrontInterface, HashMap<any, any> propertiesHashMap, PageContext pageContext);

    public: std::string getStoreName();

    public: std::string log();

    public: void override(HashMap<any, any> hashMap);

    public: std::string getName();

    public: std::string getObjectFile();

    public: Object* getObject();

    public: TransformInfoObjectConfigInterface getObjectConfigInterface();

    public: void setObjectConfigInterface(Object transformInfoObjectConfigInterface);

    public: AbPath getTemplateFilePath();

    public: std::string getTemplateFile();

    public: std::string getTemplate();

    public: AbPath getDataFilePath();

    public: std::string getDataFile();

                //@Throws(Exception.constructor)
            
    public: Document getDataDocument();

    public: void setName(std::string value);

    public: void setStoreName(std::string value);

    public: void setObjectFile(std::string value);

    public: void setObject(Object anyType);

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
            
    public: Vector toVector();

                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_H
