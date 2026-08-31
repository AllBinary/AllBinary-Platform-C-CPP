
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryInterface.h"

class Category
            : public Object
        : public CategoryInterface {
        

    private: static const NOT_ROOT: string = "This is not the root so it has no file path.";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: categoryHierarchyInterface: CategoryHierarchyInterface;

    private: categoryPropertiesInterface: CategoryPropertiesInterface;

    private: const childCategoryVector: Vector = new Vector();

    private: const typeVector: Vector = new Vector();

    private: const PROPERTIES: Integer = new Integer(1);

    private: const CATEGORY: Integer = new Integer(0);

public constructor (CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface);

public constructor (CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface, int32_t level);

public constructor (CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface);

                //@Throws(Exception.constructor)
            
    public any getKey();

                //@Throws(Exception.constructor)
            
    public AbPath getRootFilePath();

                //@Throws(Exception.constructor)
            
    public AbPath getFilePath();

                //@Throws(Exception.constructor)
            
    public AbPath getWebAppPath();

                //@Throws(Exception.constructor)
            
    public AbPath getPath();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool addChildProperty(CategoryPropertiesInterface categoryPropertiesInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool addChild(CategoryInterface categoryInterface);

    public Vector getChildNodes();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool removeChild(CategoryInterface categoryInterface);

    removal(Vector removalVector);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool removeDuplicateChild(CategoryInterface categoryInterface);

                //@Throws(Exception.constructor)
            
    public bool isLeaf();

    public CategoryPropertiesInterface getProperties();

    public setProperties(CategoryPropertiesInterface categoryPropertiesInterface);

    public CategoryHierarchyInterface getHierarchy();

    public setHierarchy(CategoryHierarchyInterface categoryHierarchyInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Boolean isValid();

                //@Throws(Exception.constructor)
            
    public Document toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public string validationInfo();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public log();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_H
