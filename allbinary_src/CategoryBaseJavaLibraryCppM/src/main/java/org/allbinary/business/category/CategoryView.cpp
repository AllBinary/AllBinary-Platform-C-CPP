
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/CategoryView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/CategoryData.h"


CategoryView::CategoryView(CategoryInterface* categoryInterface) : logUtil(LogUtil::getInstance()){
this->categoryInterface= categoryInterface;
    
}


    auto CategoryView::getCategoryInterface() -> CategoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryView::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(CategoryData::getInstance()->NAME);;
    

    BasicArrayList* childCategoryVector = this->categoryInterface->getChildNodes();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Number Of Children: ") +JavaString::valueOf(childCategoryVector->size()), this, "toXmlNode");
    

                                    }
                                

    int32_t size = childCategoryVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Object* anyType = JavaBoxes::toObject(childCategoryVector->get(i));;
    

    CategoryPropertiesInterface* categoryPropertiesInterface = 
                nullptr
            ;;
    

                        if(InterfaceUtil::isImplemented("CategoryPropertiesInterface", anyType))
                        
                                    {
                                    categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(anyType);
    

                                    }
                                
                             else 
                        if(InterfaceUtil::isImplemented("CategoryInterface", anyType))
                        
                                    {
                                    
    CategoryInterface* categoryInterface = dynamic_cast<CategoryInterface*>(anyType);;
    
categoryPropertiesInterface= categoryInterface->getProperties();
    

                                    }
                                
                        else {
                            
    std::string isImpl = InterfaceUtil::viewAll(anyType->getClass(), CommonSeps::getInstance()->NEW_LINE);;
    



                            throw Exception(JavaString::valueOf(JavaString::valueOf("CategoryView found unknown object.\n") +JavaString::valueOf("Show Testing:")) +JavaString::valueOf(isImpl));
                    

                        }
                            

    Node* childCategoryNode = (new CategoryPropertiesView(categoryPropertiesInterface))->toXmlNode(document);;
    
node->appendChild(childCategoryNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYVIEW_CPP
