
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RootCategoryPropertiesInterface.h"

class RootCategoryPropertiesAbstract
            : public Object
        : public RootCategoryPropertiesInterface {
        

    private: const category: string = CategoryData.getInstance()!.ROOTCATEGORY;

    private: const fileName: string = this.category +AbPathData.getInstance()!.EXTENSION_SEP +CategoryData.getInstance()!.UNCRYPTED_EXTENSION;

public constructor ();

    public any getKey();

    public string getValue();

                //@Throws(Exception.constructor)
            
    public setValue(string value);

                //@Throws(Exception.constructor)
            
    public setRootFilePath(AbPath value);

                //@Throws(Exception.constructor)
            
    public setRootFilePath(string value);

                //@Throws(Exception.constructor)
            
    public AbPath getRootFilePath();

                //@Throws(Exception.constructor)
            
    public bool isRealRoot();

                //@Throws(Exception.constructor)
            
    public bool isRoot();

                //@Throws(Exception.constructor)
            
    public string getWebAppPath(CategoryHierarchyInterface categoryHierarchyInterface);

    public AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface);

    public string getFileName();

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

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_ROOTCATEGORYPROPERTIESABSTRACT_H
