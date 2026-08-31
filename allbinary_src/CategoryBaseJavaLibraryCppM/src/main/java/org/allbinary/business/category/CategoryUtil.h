
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/apache/commons/lang3/StringUtils.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryData.h"

class CategoryUtil
            : public Object
         {
        
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static int32_t getPathLevel(AbPath categoryPath);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string getNameFromNode(Node node);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_H
