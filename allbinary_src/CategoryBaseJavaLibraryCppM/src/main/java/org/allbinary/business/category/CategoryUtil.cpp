
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/CategoryUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/business/category/CategoryData.h"


CategoryUtil::CategoryUtil(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryUtil::getPathLevel(AbPath* categoryPath) -> int32_t{

    int32_t count = StringUtils::countMatches(categoryPath->toString(), AbPathData::getInstance()->SEPARATOR);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return count;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryUtil::getNameFromNode(Node* node) -> std::string{

    NamedNodeMap* attributes = node->getAttributes();;
    

    Attr* attrNode = dynamic_cast<Attr*>(attributes->getNamedItem(CategoryData::getInstance()->LABEL));;
    

                        if(attrNode != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return attrNode->getValue();;
    

                                    }
                                
                        else {
                            
    Node* labelNode = DomSearchHelper::getNodeNoThrow(CategoryData::getInstance()->LABEL, node->getChildNodes());;
    

                        if(labelNode != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DomNodeHelper::getTextNodeValue(labelNode);;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYUTIL_CPP
