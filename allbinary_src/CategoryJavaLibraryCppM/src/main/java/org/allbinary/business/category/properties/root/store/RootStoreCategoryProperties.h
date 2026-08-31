
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootStoreCategoryProperties
            : public Object
        : public RootCategoryPropertiesInterface, public CategoryPropertiesInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const pathData: AbPathData = AbPathData.getInstance()!;

    private: fileAbPath: AbPath;

    private: abPath: AbPath;

    private: category: string;

    private: isRealRoot: bool;

    webAppAbPath: AbPath;

    transformInfoInterface: TransformInfoInterface;

public constructor (TransformInfoInterface transformInfoInterface);

public constructor (TransformInfoInterface transformInfoInterface, AbPath categoryAbPath);

public constructor (TransformInfoInterface transformInfoInterface, Node node);

public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap);

                //@Throws(Exception.constructor)
            
    initPath();

    public bool isRealRoot();

    public bool isRoot();

    public any getKey();

    public setPath(AbPath path);

    public setRootFilePath(AbPath value);

    public AbPath getRootFilePath();

    public string getValue();

                //@Throws(Exception.constructor)
            
    public AbPath getWebAppPath();

    public AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface);

    public string getFileName();

    public setValue(string value);

    public Boolean isValid();

    public HashMap<any, any> toHashMap();

    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public Document toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public string validationInfo();

    public log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_H
