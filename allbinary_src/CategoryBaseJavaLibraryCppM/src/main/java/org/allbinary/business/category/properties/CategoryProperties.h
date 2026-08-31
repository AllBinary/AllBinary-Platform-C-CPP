
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPropertiesInterface.h"

class CategoryProperties
            : public Object
        : public CategoryPropertiesInterface {
        

    private: static const MAXDEPTH: int32_t = 100;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: category: string;

public constructor (string name);

public constructor (Node node);

public constructor (HashMap<any, any> categoryPropertiesHashMap);

    public bool isRealRoot();

    public bool isRoot();

    public any getKey();

    public string getValue();

                //@Throws(Exception.constructor)
            
    public AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface);

    public string getFileName();

                //@Throws(Exception.constructor)
            
    public AbPath getWebAppPath();

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

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_H
